-- Last updated: 13/01/2026, 17:18:30
/* Write your T-SQL query statement below */
SELECT DISTINCT num AS ConsecutiveNums FROM (
    SELECT
    id,
    num, 
    LEAD(num) OVER (ORDER BY id) AS next_num,
    LEAD(num, 2) OVER (ORDER BY id) AS next_next_num
    FROM Logs
) t
WHERE num = next_num AND num = next_next_num;
