SET NOCOUNT ON;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/

SELECT 
    AVG([Population]) AS [Population]
FROM City
WHERE [District] = 'California'
go