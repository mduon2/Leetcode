-- Last updated: 13/01/2026, 18:11:00
/* Write your T-SQL query statement below */
SELECT name as Customers FROM Customers LEFT JOIN Orders ON Customers.id = Orders.customerId WHERE Orders.customerId IS NULL;
