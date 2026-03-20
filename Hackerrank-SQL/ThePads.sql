SET NOCOUNT ON;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

;WITH CTE_Names AS (
    select 
        ROW_NUMBER() OVER(ORDER BY [Name] ASC) RN,
        CONCAT( [Name], CONCAT('(',LEFT(Occupation,1),')') ) [Name]
    from Occupations
),

CTE_Occupations AS (
    select
        ROW_NUMBER() OVER(ORDER BY COUNT([Occupation]) ASC, [Occupation] ASC) RN,
        CONCAT('There are a total of ', COUNT([Occupation]), ' ', LOWER([Occupation]),'s.') AS [Occupation]
    from Occupations
    group by [Occupation]

)

SELECT
    [Name]
FROM CTE_Names 

UNION 

SELECT 
    [Occupation]
FROM CTE_Occupations

go



