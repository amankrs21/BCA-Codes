use rdbms;

CREATE TABLE Employee (
    Employee_no integer(3), 
    First_name VARCHAR(10), 
    Last_name varchar(10), 
    Salary decimal(8.2), 
    Joining_date date, 
    Department VARCHAR(10)
    );

INSERT INTO Employee
(Employee_no, First_name, Last_name, Salary, Joining_date, Department) 
VALUES 
(1,'John','Abraham','100000','2013-01-01','Banking'), 
(2,'Michael','Clarke','80000','2013-04-01', 'Insurance'), 
(3,'Roy','Thomas','70000','2013-05-21','Banking'), 
(4,'Tom','Jose','60000','2013-12-08','Insurance'), 
(5,'Jerry','Pinto','65000','2014-02-11','Marketing'), 
(6,'Philip','Mathew','45000','2014-01-07','Services'), 
(7,'John','Henry','55000','2015-01-01','Technical'), 
(8,'Ivan','Bayross','60000','2015-08-01','Sales');

CREATE TABLE Incentives (
    Employee_Ref_Id integer(3),
    Incentive_date date,
    Incentive_amount decimal(8,2)
    );

INSERT INTO Incentives 
(Employee_Ref_Id,Incentive_date,Incentive_amount) 
VALUES 
(1,'2013-02-01','5000'), 
(2,'2013-12-01','3000'), 
(3,'2013-03-01','4000'), 
(4,'2015-04-21','4500'), 
(5,'2015-09-01','3500');
SELECT * FROM Incentives;

ALTER TABLE Employee ADD PRIMARY KEY (Employee_no);
Alter table Incentives ADD Foreign Key (Employee_Ref_Id) References Employee (Employee_no);
SELECT * FROM Employee;
SELECT First_name, Last_name FROM employee;
SELECT First_name "Employee Name" from Employee;
SELECT upper(First_name) FROM Employee;
SELECT lower(First_name) FROM Employee;
SELECT DISTINCT Department from Employee;
