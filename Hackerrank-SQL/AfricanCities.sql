SET NOCOUNT ON;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

SELECT
    C.Name
FROM City C 
INNER JOIN Country CY 
    ON C.CountryCode = CY.Code
WHERE CY.Continent = 'Africa'

go