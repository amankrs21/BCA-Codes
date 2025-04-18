use rdbms;

CREATE TABLE Client_Master (
    Client_No varchar(6), 
    Name varchar(20), 
    Address varchar(50), 
    City varchar(20), 
    Pincode bigint(8), 
    State varchar(20), 
    Bal_Due Decimal(10,2)
    );

INSERT INTO Client_Master 
(Client_No, Name, Address, City, Pincode, State, Bal_Due) 
VALUES 
('C0001', 'Roshan Joshi', 'Khapaitya Chakla', 'Surat', 395003, 'Gujarat', '15000'), 
('C0002', 'Mamta Mazumdar', 'Salt Lake', 'Kolkata', 460012, 'West Bengal', '5000'), 
('C0003', 'Chhaya Bankar', 'Worli', 'Mumbai', 400054, 'Maharashtra', '2000'), 
('C0004', 'Ashwini Rathod', 'Ghangaur Ghat', 'Udaipur', 780011, 'Rajasthan', '7000'), 
('C0005', 'Ivan Bayross', 'Indiranagar', 'Bangalore', 560050, 'karnataka', '1500'), 
('C0006', 'Deepak Sharma', 'Bandra', 'Mumbai', 400002, 'Maharashtra', '4300'), 
('C0007', 'Shymali Bhide', 'Juhu', 'Mumbai', 470912, 'Maharashtra', '2100');
SELECT * FROM Client_Master;

SELECT * FROM Client_Master ORDER BY Bal_Due;
SELECT * from Client_Master where City = 'Mumbai';
SELECT State FROM Client_Master GROUP BY State;
UPDATE Client_Master SET City = 'Mangalore' where Client_No = 'C0005';
UPDATE Client_Master SET Bal_Due = 1000 where Client_No = 'C0001';
DELETE from Client_Master where State = 'Rajasthan';
ALTER TABLE Client_Master Add (Phone_no bigint(10));
CREATE TABLE Balance_Details (
    Client_No Varchar(6), 
    Name varchar(20), 
    Bal_Due decimal(10,2)
    );
INSERT INTO `Balance_Details` 
(`Client_No`, `Name`, `Bal_Due`) 
VALUES 
('C0001', 'Roshan Joshi', '15000'), 
('C0002', 'Mamta Muzumdar', '500'), 
('C0003', 'Chhaya Bankar', '2000'), 
('C0004', 'Ashwini Rathod', '7000'), 
('C0005', 'Ivan Bayross', '1500'), 
('C0006', 'Deepak Sharma', '4300'), 
('C0007', 'Shymali Bhide', '2100');
ALTER TABLE `Balance_Details` CHANGE `Bal_Due` `Balance` DECIMAL(10,2);
ALTER TABLE Client_Master RENAME TO Customers;
ALter TABLE  Customer Rename to Client_Master;
