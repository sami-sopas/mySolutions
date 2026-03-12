SET NOCOUNT ON;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT
    CAST(ROUND(Long_w,4) AS DECIMAL(20,4)) Result
FROM Station
WHERE Lat_n = (SELECT MIN(Lat_n) FROM Station WHERE Lat_n > 38.7780)

go