-- Query the list of CITY names ending with vowels (a, e, i, o, u) from STATION. Your result cannot contain duplicates.

DECLARE @Station AS TABLE (
    City NVARCHAR(100)
);

INSERT INTO @Station
    SELECT CITY FROM STATION;

SELECT DISTINCT
 City
FROM @Station
WHERE LOWER(SUBSTRING(City,LEN(City),1)) IN ('a','e','i','o','u')
