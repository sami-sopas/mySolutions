SET NOCOUNT ON;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

SELECT 
    CAST(SUM(Lat_n) AS DECIMAL(20,4)) AS Result
FROM Station
WHERE Lat_n > 38.7880
AND Lat_n < 137.2345
    
go