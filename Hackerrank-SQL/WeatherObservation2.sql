SET NOCOUNT ON;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

select
    CONCAT(
        CAST(ROUND((SELECT SUM(Lat_n) FROM Station),2) AS DECIMAL(10,2)),
        '  ',
        CAST(ROUND((SELECT SUM(Long_w) FROM Station),2) AS DECIMAL (10,2))
    );


go