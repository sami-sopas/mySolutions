DECLARE @Station AS TABLE (
    City NVARCHAR(100)
);

INSERT INTO @Station
    SELECT CITY FROM STATION;

SELECT DISTINCT
 City
FROM @Station
WHERE LOWER(SUBSTRING(City,LEN(City), LEN(City))) NOT IN ('a','e','i','o','u') --Last letter
