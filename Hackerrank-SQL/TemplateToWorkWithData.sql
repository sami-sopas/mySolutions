-- This is an example code to copy output from Hackerrank and paste it here
-- Just have to consider the number of columns, create the table-type variable
-- and maybe some cast if is required, but this is the main template

------------------------------------ TEMPLATE -------------------------------------------------

DECLARE @RawText NVARCHAR(MAX) = '
19 Samantha 87
21 Julia 96
11 Britney 95
32 Kristeen 100
12 Dyana 55
13 Jenny 66
';

DECLARE @ColumnCount INT = 3; -- Change this value depending of number of columns

-- Split every line
;WITH Lines AS (
    SELECT TRIM(value) AS Line
    FROM STRING_SPLIT(@RawText, CHAR(10))
    WHERE TRIM(value) <> ''
),
-- Split every line by empty space
Tokens AS (
    SELECT 
        Line,
        TRIM(value) AS Token,
        ROW_NUMBER() OVER (PARTITION BY Line ORDER BY (SELECT NULL)) AS Position
    FROM Lines
    CROSS APPLY STRING_SPLIT(Line, ' ')
),
-- Group by line, concatening  quotes and commas
Grouped AS (
    SELECT 
        Line,
        STRING_AGG(CONCAT('''', Token, ''''), ', ') 
            WITHIN GROUP (ORDER BY Position) AS ValuesQuoted,
        COUNT(*) AS NumCols
    FROM Tokens
    GROUP BY Line
)
-- Generate final inserts
SELECT 
    'INSERT INTO @Students VALUES (' + ValuesQuoted + ');' AS SQL_Insert
FROM Grouped
WHERE NumCols = @ColumnCount;



------------------------------------ DATA TO WORK WITH  -------------------------------------------------

-- Create Table-Type variable
DECLARE @Students AS TABLE (
    [Id] INT,
    [Name] NVARCHAR(100),
    Marks INT
);

--Here we copy the result from the final insert and we have the data to work!
INSERT INTO @Students VALUES ('11', 'Britney', '95 ');
INSERT INTO @Students VALUES ('12', 'Dyana', '55 ');
INSERT INTO @Students VALUES ('13', 'Jenny', '66 ');
INSERT INTO @Students VALUES ('19', 'Samantha', '87 ');
INSERT INTO @Students VALUES ('21', 'Julia', '96 ');
INSERT INTO @Students VALUES ('32', 'Kristeen', '100 ');

SELECT * FROM @Students


