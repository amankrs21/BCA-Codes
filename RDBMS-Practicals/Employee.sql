USE aman;
-- DROP TABLE Employee;
-- CREATE TABLE Employee
-- (Employee_no integer PRIMARY KEY, First_name VARCHAR(10), Last_name varchar(10), Salary money, Joining_date date, Department VARCHAR(10));
-- EXEC sp_help Employee;
-- EXEC sp_columns Employee;
-- INSERT INTO Employee VALUES(1,'John','Abraham','100000','01/01/2013','Banking');
-- INSERT INTO Employee VALUES(2,'Michael','Clarke','80000','04/01/2013','Insurance');
-- INSERT INTO Employee VALUES(3,'Roy','Thomas','70000','05/21/2013','Banking');
-- INSERT INTO Employee VALUES(4,'Tom','Jose','60000','08/12/2013','Insurance');
-- INSERT INTO Employee VALUES(5,'Jerry','Pinto','65000','11/02/2014','Marketing');
-- INSERT INTO Employee VALUES(6,'Philip','Mathew','45000','01/07/2014','Services');
-- INSERT INTO Employee VALUES(7,'John','Henry','55000','01/01/2015','Technical');
-- INSERT INTO Employee VALUES(8,'Ivan','Bayross','60000','01/08/2015','Sales');

-- drop TABLE Incentives;
-- CREATE TABLE Incentives
-- (Employee_Ref_Id integer Foreign Key,Incentive_date date,Incentive_amount money);
-- EXEC sp_columns Incentives;
-- INSERT INTO Incentives VALUES(1,'02/01/2013','5000');
-- INSERT INTO Incentives VALUES(2,'12/01/2013','3000');
-- INSERT INTO Incentives VALUES(3,'03/01/2013','4000');
-- INSERT INTO Incentives VALUES(4,'03/21/2015','4500');
-- INSERT INTO Incentives VALUES(5,'09/01/2015','3500');

-- Alter table Incentives ADD Foreign Key (Employee_Ref_Id) References Employee (Employee_no);
-- SELECT * FROM Employee;
-- SELECT First_name, Last_name from Employee;
-- SELECT First_name "Employee Name" from Employee;
-- SELECT UPPER(First_name) from Employee;
-- SELECT LOWER(First_name) from Employee;
-- SELECT DISTINCT Department from Employee;

-- Select * from Employee order by First_name ASC;
-- Select * from Employee order by First_name DESC;
-- Select * from Employee order by First_name ASC, Salary DESC;
-- Select * from Employee where First_name = 'John';
-- SELECT * from Employee where First_name in ('John','Roy');
-- SELECT * from Employee where First_name like 'J%';
-- SELECT * from Employee where First_name like '%o%';
-- SELECT * from Employee where First_name like '%n';
-- SELECT * from Employee where First_name like '___n';
-- SELECT * from Employee where First_name like 'J___';
-- SELECT * from Employee where Salary > 60000;
-- SELECT * from Employee where Salary < 80000;
-- SELECT * from Employee where Salary BETWEEN 50000 and 80000;
-- SELECT * from Employee where First_name in ('John','Michael');
-- SELECT CHARINDEX('o', 'John') AS Postion_of_o_in_John;
-- SELECT MIN(Salary) as Minimum_salary from Employee;
-- SELECT MAX(Salary) as Maximimum_salary from Employee;
-- SELECT Department, COUNT(*) FROM Employee GROUP BY Department;
-- SELECT AVG(Salary) as Average_salary from Employee;


