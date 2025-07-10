/* Query the list of CITY names from STATION that either do not start with vowels or do not end with vowels. 
  Your result cannot contain duplicates. */

DECLARE @Station AS TABLE (
    City NVARCHAR(100)
);

INSERT INTO @Station
    SELECT CITY FROM STATION;

SELECT DISTINCT
 City
FROM @Station
WHERE LOWER(SUBSTRING(City,1,1)) NOT IN ('a','e','i','o','u')  --First letter
OR LOWER(SUBSTRING(City,LEN(City), LEN(City))) NOT IN ('a','e','i','o','u') --Last letter
