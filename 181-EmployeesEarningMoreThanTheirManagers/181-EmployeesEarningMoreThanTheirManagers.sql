-- Last updated: 11/01/2026, 19:49:30
# Write your MySQL query statement below

SELECT A.name as Employee FROM Employee A, Employee B WHERE A.managerID = B.ID AND A.salary > B.salary;