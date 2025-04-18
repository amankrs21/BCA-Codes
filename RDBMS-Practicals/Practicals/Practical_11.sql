use rdbms;

SELECT Department, count(*) FROM Employee group by Department;
SELECT Department, SUM(salary)FROM Employee group by Department;
SELECT Department,AVG(salary) FROM Employee group by Department;
SELECT Department FROM Employee group by Department having count(Employee_no) >1;
SELECT Department FROM Employee group by Department having SUM(salary) > 50000;
SELECT Department FROM Employee group by Department having AVG(salary) < 50000;
SELECT Department FROM Employee group by Department having AVG(salary) between 50000 and 80000;
SELECT * FROM Employee e WHERE month(joining_date) IN (SELECT month(joining_date) FROM Employee WHERE e.Employee_no <> Employee_no);
SELECT * FROM Employee e WHERE year(joining_date) IN (SELECT year(joining_date) FROM Employee WHERE e.Employee_no <> Employee_no);
SELECT SUM(salary) FROM Employee e WHERE month(joining_date) IN (SELECT month(joining_date) FROM Employee WHERE e.Employee_no <> Employee_no);
SELECT first_name,incentive_amount FROM Employee inner join Incentives on Employee.Employee_no=Incentives.Employee_ref_id;
SELECT first_name,incentive_amount FROM Employee inner join Incentives on Employee.Employee_no=Incentives.Employee_ref_id WHERE Incentive_amount<5000;
SELECT first_name,incentive_amount FROM Employee inner join Incentives on Employee.Employee_no=Incentives.Employee_ref_id WHERE Incentive_amount > 3000;
SELECT first_name,Incentive_amount FROM Employee inner join Incentives on Employee.Employee_no=Incentives.Employee_ref_id WHERE Incentive_amount < 3000;
SELECT first_name,Incentive_amount FROM Employee left join Incentives on Employee.Employee_no=Incentives.Employee_ref_id;
