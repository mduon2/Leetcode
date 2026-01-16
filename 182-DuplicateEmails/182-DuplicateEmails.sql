-- Last updated: 14/01/2026, 14:53:00
/* Write your T-SQL query statement below */
SELECT DISTINCT email as Email FROM (
    SELECT
    email,
    LEAD(email) OVER (ORDER BY email) as next_email
    FROM Person
) t
WHERE email = next_email;
