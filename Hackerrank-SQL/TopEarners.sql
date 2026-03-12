SET NOCOUNT ON;

;WITH TotalEarnings AS (
    SELECT
        *,
        Months * Salary AS TotalEarnings
    FROM Employee
)


 SELECT CONCAT(
        (SELECT MAX(TotalEarnings) AS MaxTotalEarning FROM TotalEarnings),
        '  ',
        (SELECT COUNT(*) FROM TotalEarnings WHERE TotalEarnings = (SELECT MAX(TotalEarnings) AS MaxTotalEarning FROM TotalEarnings)))
go