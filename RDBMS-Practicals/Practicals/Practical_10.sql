
SELECT UPPER(First_name) from Employee;
SELECT LOWER(First_name) from Employee;
SELECT POSITION("o" IN "John") AS "Position of o in John";
SELECT SUBSTRING( First_name, 1, 3 ) FROM Employee;
SELECT RTRIM(First_name) as "First Name" from Employee;
SELECT LTRIM(First_name) FROM Employee;
SELECT LENGTH(First_name) as "Length of First Name" from Employee;
SELECT REPLACE(First_name, 'o','$') from Employee;
SELECT CONCAT(First_name, "_", Last_name) AS Employee FROM Employee;
SELECT CONCAT(First_name, "_", YEAR(Joining_date), "_", MONTH(Joining_date), "_", Day(Joining_date)) AS Employee FROM Employee;
SELECT * FROM Employee WHERE YEAR(Joining_date) = 2013;
SELECT * FROM Employee WHERE MONTH(Joining_date) = 01;
SELECT * FROM Employee WHERE Joining_date < 2013-01-01;
SELECT * FROM  Employee where Joining_date > '2013-01-31';
SELECT DATE(Joining_date) as Date, TIME(Joining_date) as Time from Employee;
SELECT First_name, Incentive_date - Joining_date as "Date Difference" from Employee A inner join Incentives B on A.Employee_no=B.Employee_Ref_Id;
