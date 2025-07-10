DECLARE @Station AS TABLE (
    City NVARCHAR(100)
);

INSERT INTO @Station
    SELECT CITY FROM STATION;

SELECT DISTINCT
 City
FROM @Station
WHERE LOWER(SUBSTRING(City,1,1)) NOT IN ('a','e','i','o','u')  --First letter
