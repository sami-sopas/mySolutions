/*
Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) 
from STATION. Your result cannot contain duplicates.
*/

DECLARE @Station AS TABLE (
    City NVARCHAR(100)
);

INSERT INTO @Station
    SELECT CITY FROM STATION;
    
SELECT
 City
FROM @Station
WHERE LOWER(SUBSTRING(City,1,1)) IN ('a','e','i','o','u')
