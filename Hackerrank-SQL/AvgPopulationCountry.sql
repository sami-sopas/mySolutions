SET NOCOUNT ON;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

SELECT 
    Continent,
    FLOOR(AVG(C.Population))
FROM Country CY 
INNER JOIN City C 
    ON CY.Code = C.CountryCode
GROUP BY 
    CY.Continent

go