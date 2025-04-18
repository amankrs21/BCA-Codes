-- CREATE TABLE students(E_ID INTEGER PRIMARY KEY, F_name varchar(10), M_name varchar(10), L_name varchar(10), dept varchar(10));

/* Create few records in this table */
INSERT INTO students VALUES(101,'Aman', 'Kumar', 'Singh', 'BCA');
INSERT INTO students VALUES(102,'Roshni', '', 'Singh', 'BCA');
INSERT INTO students VALUES(103,'Yash', '', 'Raj', 'BCA');
INSERT INTO students VALUES(104,'Varun', 'Kumar', 'Singh', 'BCA');
INSERT INTO students VALUES(105,'Digpal', '', 'Singh', 'BCA');
COMMIT;

/* Display all the records from the table */
SELECT * FROM students;

/*Now update any data*/
UPDATE students
SET dept = 'C'
WHERE L_name =  'Raj';
SELECT E_ID, F_name, L_name, dept FROM students;

-- Now deleeing a row
DELETE from students
WHERE E_ID = 104;
SELECT * from students;