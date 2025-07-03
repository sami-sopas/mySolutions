/*Query the two cities in STATION with the shortest and longest CITY names, as well as their respective lengths (i.e.: number of characters in the name). 
If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically.

For example, CITY has four entries: DEF, ABC, PQRS and WXY.
Sample Output
ABC 3
PQRS 4
*/

DECLARE @Station AS TABLE (
    City NVARCHAR(100)
);

DECLARE @Temp AS TABLE(
    City NVARCHAR(100),
    RN INT
)

DECLARE @Res AS TABLE (
    City NVARCHAR(100),
    Len INT
)

INSERT INTO @Station VALUES ('DEF'), ('ABC'), ('PQRS'), ('WXY')

INSERT INTO @Temp 
    SELECT
        City,
        ROW_NUMBER() OVER (ORDER BY LEN(City), City ASC) RN
    FROM @Station

INSERT INTO @Res
    SELECT TOP 1
    City,
    LEN(City) Len
    FROM @Temp
    ORDER BY RN ASC

INSERT INTO @Res
    SELECT TOP 1
    City,
    LEN(City) Len
    FROM @Temp 
    ORDER BY RN DESC

SELECT * FROM @Res
