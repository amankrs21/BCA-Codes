use rdbms;

INSERT INTO `Customer` 
(`cust_id`, `Lname`, `Fname`, `Area`, `phone_no`) 
VALUES 
('a01', 'Patel', 'Vijay', 'sa', 381334),
('a02', 'Saitwal', 'Vandana', 'mu', 556037), 
('a03', 'Jaguste', 'Pramada', 'da', 372631), 
('a04', 'Navindgi', 'Basu', 'ba', 666612), 
('a05', 'Sreedhran', 'Ravi', 'va', 0),
('a06', '', 'Rukmini', 'ga', 512527);

SELECT  * FROM Customer;
