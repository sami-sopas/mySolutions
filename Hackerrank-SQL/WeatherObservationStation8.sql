/* Query the list of CITY names from STATION which have vowels (i.e., a, e, i, o, and u) 
    as both their first and last characters. Your result cannot contain duplicates. */

DECLARE @Station AS TABLE (
    City NVARCHAR(100)
);

INSERT INTO @Station
    SELECT CITY FROM Station;
    
SELECT DISTINCT
 City
FROM @Station
WHERE LOWER(SUBSTRING(City,1,1)) IN ('a','e','i','o','u')  --First letter
AND LOWER(SUBSTRING(City,LEN(City), LEN(City))) IN ('a','e','i','o','u') --Last letter
