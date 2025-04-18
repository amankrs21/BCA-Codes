use rdbms;

CREATE TABLE DEPT ( 
    deptno INT(3), 
    dname VARCHAR(10), 
    location VARCHAR(10)
    );
INSERT INTO DEPT 
(deptno, dname, location) 
VALUES 
(10,'Accounting','New York'), 
(20,'Research','Dallas'), 
(30,'Sales','Chicago'), 
(40,'Operations','Boston');


CREATE TABLE EMP (
    EMP_no int(5), 
    Ename varchar(15), 
    Job varchar(15), 
    Mgr int(5), 
    hiredate date, 
    Sal decimal(8,2), 
    Comm integer(4), 
    deptno integer(3)
    );

INSERT INTO EMP
(EMP_no,Ename,Job,Mgr,hiredate,Sal,Comm,deptno) 
VALUES 
(7839, 'King', 'President', NULL, '1981-11-17', 5000, NULL, 10),
(7698,'Blake','Manager',7839,'1981-05-01',2850,NULL,30), 
(7782,'Clerk','Manager',7839,'1981-06-09',2450,NULL,10), 
(7566,'Jones','Manager',7839,'1981-04-02',2975,NULL, 20), 
(7788,'Scott','Analyst',7566,'1987-07-13',3000,NULL,20), 
(7902,'Ford','Analyst',7566,'1981-12-03',3000,NULL,20), 
(7369,'Smith','Clerk',7902,'1980-12-17',800,NULL,20), 
(7499, 'Allen', 'Salesman', 7698, '1981-02-20', 1600, 300, 30), 
(7521, 'Ward', 'Salesman', 7698, '1981-02-22', 1250, 500, 30), 
(7654, 'Martin', 'Salesman', 7698, '1981-09-28', 1250, 1400, 30), 
(7844, 'Turnor', 'Salesman', 7698, '1981-09-08', 1500, NULL, 30), 
(7876, 'Adams', 'Clerk', 7788, '1987-07-13', 1100, NULL, 20), 
(7900, 'James', 'Clerk', 7698, '1981-07-13', 950, NULL, 20), 
(7934, 'Miler', 'Clerk', 7782, '1982-01-23', 1300, NULL, 10);


SELECT * FROM DEPT WHERE deptno in (10, 40);
SELECT * FROM EMP WHERE Deptno = 30 and Sal > 1500;
SELECT * FROM EMP WHERE Job NOT IN('Salesman','Clerk');
SELECT * FROM EMP WHERE Ename in('Blake', 'Scott', 'King', 'Ford');
SELECT * FROM EMP WHERE Ename Like 'S_____';
SELECT * FROM EMP WHERE Ename like '%r';
SELECT * FROM EMP WHERE YEAR(hiredate)=1981;
SELECT * FROM EMP WHERE hiredate BETWEEN '1980-08-01' and '1980-08-31';
SELECT AVG(Sal) AS 'Average Salary' FROM EMP WHERE Job = 'Clerk';
SELECT * FROM EMP WHERE Job not in('Manager','President') ORDER BY Sal ASC;
SELECT COUNT(Mgr) AS 'Total MGR',COUNT(Sal) AS 'Total Salary' FROM EMP;
SELECT Ename,Sal+Comm AS 'Salary with Commision' FROM EMP;
-- 13 number is wrong question
SELECT * FROM EMP WHERE Sal<3000;
SELECT * FROM EMP GROUP BY Deptno ORDER BY Sal DESC;
SELECT * FROM EMP WHERE Mgr not in (NULL);
SELECT * FROM EMP WHERE Deptno=20 and Job='Clerk';
SELECT * FROM EMP ORDER BY Sal DESC LIMIT 3;
SELECT * FROM EMP ORDER BY Sal ASC LIMIT 3;
