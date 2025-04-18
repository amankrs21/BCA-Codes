-- phpMyAdmin SQL Dump
-- version 5.1.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 13, 2021 at 01:24 PM
-- Server version: 10.4.18-MariaDB
-- PHP Version: 8.0.5

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bca`
--
CREATE DATABASE IF NOT EXISTS `bca` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `bca`;

-- --------------------------------------------------------

--
-- Table structure for table `sem_2`
--

CREATE TABLE `sem_2` (
  `Name` varchar(20) DEFAULT NULL,
  `Enroll` bigint(12) DEFAULT NULL,
  `Batch` varchar(1) DEFAULT NULL,
  `Branch` varchar(5) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
--
-- Database: `flight`
--
CREATE DATABASE IF NOT EXISTS `flight` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `flight`;

-- --------------------------------------------------------

--
-- Table structure for table `flight`
--

CREATE TABLE `flight` (
  `Flight_ID` varchar(14) NOT NULL,
  `Flight_time` varchar(6) DEFAULT NULL,
  `Departure` varchar(13) DEFAULT NULL,
  `Destination` varchar(13) DEFAULT NULL,
  `Flight_status` varchar(13) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `flight`
--

INSERT INTO `flight` (`Flight_ID`, `Flight_time`, `Departure`, `Destination`, `Flight_status`) VALUES
('AIRINDIA1001', '15:20', 'Mumbai', 'Delhi', 'On Time'),
('AIRINDIA1002', '13:30', 'Mumbai', 'Vadodara', 'Rescheduled'),
('AIRINDIA1003', '12:30', 'Mumbai', 'Bangalore', 'On Time'),
('AIRINDIA1004', '11:00', 'Mumbai', 'Chennai', 'On Time'),
('AIRINDIA1005', '10:40', 'Mumbai', 'GOA', 'Delayed'),
('AIRINDIA1006', '01:30', 'Mumbai', 'Lucknow', 'Canceled'),
('AIRINDIA1007', '02:30', 'Mumbai', 'Patna', 'On Time'),
('AIRINDIA1008', '03:30', 'Mumbai', 'Ranchi', 'Rescheduled'),
('AIRINDIA1009', '08:00', 'Mumbai', 'Dubai', 'On Time'),
('AIRINDIA1010', '08:00', 'Mumbai', 'New York', 'Delayed'),
('AIRINDIA1011', '08:00', 'Mumbai', 'Canada', 'On Time'),
('AIRINDIA1012', '08:00', 'Mumbai', 'London', 'Canceled'),
('AIRINDIA1013', '08:00', 'Mumbai', 'Saudi Arab', 'Delayed'),
('AIRINDIA1021', '15:45', 'Vadodara', 'Delhi', 'On Time'),
('AIRINDIA1022', '09:30', 'Vadodara', 'Mumbai', 'Rescheduled'),
('AIRINDIA1023', '10:15', 'Vadodara', 'Bangalore', 'Delayed'),
('AIRINDIA1024', '00:35', 'Vadodara', 'Chennai', 'Canceled'),
('AIRINDIA1025', '02:55', 'Vadodara', 'GOA', 'On Time'),
('AIRINDIA1026', '05:25', 'Vadodara', 'Lucknow', 'Delayed'),
('AIRINDIA1027', '01:45', 'Vadodara', 'Patna', 'Rescheduled'),
('AIRINDIA1028', '18:35', 'Vadodara', 'Ranchi', 'On Time'),
('AIRINDIA1029', '08:00', 'Vadodara', 'Dubai', 'On Time'),
('AIRINDIA1030', '06:30', 'Vadodara', 'New York', 'Delayed'),
('AIRINDIA1031', '10:00', 'Vadodara', 'Canada', 'On Time'),
('AIRINDIA1032', '15:00', 'Vadodara', 'London', 'On Time'),
('AIRINDIA1033', '07:00', 'Vadodara', 'Saudi Arab', 'Delayed'),
('AIRINDIA1034', '15:20', 'Delhi', 'Mumbai', 'On Time'),
('AIRINDIA1035', '13:30', 'Delhi', 'Vadodara', 'Rescheduled'),
('AIRINDIA1036', '12:30', 'Delhi', 'Bangalore', 'On Time'),
('AIRINDIA1037', '11:00', 'Delhi', 'Chennai', 'On Time'),
('AIRINDIA1038', '10:40', 'Delhi', 'GOA', 'Delayed'),
('AIRINDIA1039', '01:30', 'Delhi', 'Lucknow', 'Canceled'),
('AIRINDIA1040', '02:30', 'Delhi', 'Patna', 'On Time'),
('AIRINDIA1041', '03:30', 'Delhi', 'Ranchi', 'Rescheduled'),
('AIRINDIA1042', '08:00', 'Delhi', 'Dubai', 'On Time'),
('AIRINDIA1043', '08:00', 'Delhi', 'New York', 'Delayed'),
('AIRINDIA1044', '08:00', 'Delhi', 'Canada', 'On Time'),
('AIRINDIA1045', '08:00', 'Delhi', 'London', 'Canceled'),
('AIRINDIA1046', '08:00', 'Delhi', 'Saudi Arab', 'Delayed'),
('AIRINDIA1051', '15:45', 'Bangalore', 'Delhi', 'On Time'),
('AIRINDIA1052', '09:30', 'Bangalore', 'Mumbai', 'Rescheduled'),
('AIRINDIA1053', '10:15', 'Bangalore', 'Vadodara', 'Delayed'),
('AIRINDIA1054', '00:35', 'Bangalore', 'Chennai', 'Canceled'),
('AIRINDIA1055', '02:55', 'Bangalore', 'GOA', 'On Time'),
('AIRINDIA1056', '05:25', 'Bangalore', 'Lucknow', 'Delayed'),
('AIRINDIA1057', '01:45', 'Bangalore', 'Patna', 'Rescheduled'),
('AIRINDIA1058', '18:35', 'Bangalore', 'Ranchi', 'On Time'),
('AIRINDIA1059', '08:00', 'Bangalore', 'Dubai', 'On Time'),
('AIRINDIA1060', '06:30', 'Bangalore', 'New York', 'Delayed'),
('AIRINDIA1061', '10:00', 'Bangalore', 'Canada', 'On Time'),
('AIRINDIA1062', '15:00', 'Bangalore', 'London', 'On Time'),
('AIRINDIA1063', '07:00', 'Bangalore', 'Saudi Arab', 'Delayed'),
('AIRINDIA1071', '15:20', 'Patna', 'Mumbai', 'On Time'),
('AIRINDIA1072', '13:30', 'Patna', 'Vadodara', 'Rescheduled'),
('AIRINDIA1073', '12:30', 'Patna', 'Bangalore', 'On Time'),
('AIRINDIA1074', '11:00', 'Patna', 'Chennai', 'On Time'),
('AIRINDIA1075', '10:40', 'Patna', 'GOA', 'Delayed'),
('AIRINDIA1076', '01:30', 'Patna', 'Lucknow', 'Canceled'),
('AIRINDIA1077', '02:30', 'Patna', 'Delhi', 'On Time'),
('AIRINDIA1078', '03:30', 'Patna', 'Ranchi', 'Rescheduled'),
('AIRINDIA1081', '15:45', 'Lucknow', 'Delhi', 'On Time'),
('AIRINDIA1082', '09:30', 'Lucknow', 'Mumbai', 'Rescheduled'),
('AIRINDIA1083', '10:15', 'Lucknow', 'Vadodara', 'Delayed'),
('AIRINDIA1084', '00:35', 'Lucknow', 'Chennai', 'Canceled'),
('AIRINDIA1085', '02:55', 'Lucknow', 'GOA', 'On Time'),
('AIRINDIA1086', '05:25', 'Lucknow', 'Bangalore', 'Delayed'),
('AIRINDIA1087', '01:45', 'Lucknow', 'Patna', 'Rescheduled'),
('AIRINDIA1088', '18:35', 'Lucknow', 'Ranchi', 'On Time'),
('AIRINDIA1091', '15:20', 'Chennai', 'Mumbai', 'On Time'),
('AIRINDIA1092', '13:30', 'Chennai', 'Vadodara', 'Rescheduled'),
('AIRINDIA1093', '12:30', 'Chennai', 'Bangalore', 'On Time'),
('AIRINDIA1094', '11:00', 'Chennai', 'Patna', 'On Time'),
('AIRINDIA1095', '10:40', 'Chennai', 'GOA', 'Delayed'),
('AIRINDIA1096', '01:30', 'Chennai', 'Lucknow', 'Canceled'),
('AIRINDIA1097', '02:30', 'Chennai', 'Delhi', 'On Time'),
('AIRINDIA1098', '03:30', 'Chennai', 'Ranchi', 'Rescheduled'),
('AIRINDIA1111', '15:45', 'GOA', 'Delhi', 'On Time'),
('AIRINDIA1112', '09:30', 'GOA', 'Mumbai', 'Rescheduled'),
('AIRINDIA1113', '10:15', 'GOA', 'Vadodara', 'Delayed'),
('AIRINDIA1114', '00:35', 'GOA', 'Chennai', 'Canceled'),
('AIRINDIA1115', '02:55', 'GOA', 'Lucknow', 'On Time'),
('AIRINDIA1116', '05:25', 'GOA', 'Bangalore', 'Delayed'),
('AIRINDIA1117', '01:45', 'GOA', 'Patna', 'Rescheduled'),
('AIRINDIA1118', '18:35', 'GOA', 'Ranchi', 'On Time'),
('AIRINDIA1121', '13:00', 'Dubai', 'Delhi', 'Rescheduled'),
('AIRINDIA1122', '12:00', 'Dubai', 'Mumbai', 'On Time'),
('AIRINDIA1123', '11:00', 'Dubai', 'Vadodara', 'On Time'),
('AIRINDIA1124', '10:40', 'Dubai', 'Bangalore', 'Delayed'),
('AIRINDIA1125', '08:00', 'New York', 'Delhi', 'Delayed'),
('AIRINDIA1126', '15:00', 'New York', 'Mumbai', 'On Time'),
('AIRINDIA1127', '10:00', 'New York', 'Vadodara', 'On Time'),
('AIRINDIA1128', '06:40', 'New York', 'Bangalore', 'On Time'),
('AIRINDIA1129', '13:00', 'London', 'Delhi', 'On Time'),
('AIRINDIA1130', '12:00', 'London', 'Mumbai', 'On Time'),
('AIRINDIA1131', '11:00', 'London', 'Vadodara', 'Delayed'),
('AIRINDIA1132', '00:00', 'London', 'Bangalore', 'Rescheduled'),
('AIRINDIA1133', '09:00', 'Canada', 'Delhi', 'On Time'),
('AIRINDIA1134', '11:00', 'Canada', 'Mumbai', 'Delayed'),
('AIRINDIA1135', '17:00', 'Canada', 'Vadodara', 'On Time'),
('AIRINDIA1136', '21:00', 'Canada', 'Bangalore', 'On Time'),
('AIRINDIA1137', '22:00', 'Saudi Arab', 'Delhi', 'On Time'),
('AIRINDIA1138', '23:00', 'Saudi Arab', 'Mumbai', 'On Time'),
('AIRINDIA1139', '14:00', 'Saudi Arab', 'Vadodara', 'On Time'),
('AIRINDIA1140', '06:00', 'Saudi Arab', 'Bangalore', 'On Time'),
('AMANSINGH', '02:25', 'Norway', 'Delhi', 'Delayed'),
('AMANSINGH21', '15:00', 'Norway', 'Mumbai', 'Canceled'),
('INDIGO233', '15:45', 'Vaodara', 'Delhi', 'On Time');

-- --------------------------------------------------------

--
-- Table structure for table `login`
--

CREATE TABLE `login` (
  `username` varchar(20) NOT NULL,
  `password` varchar(20) DEFAULT NULL,
  `Mobileno` bigint(12) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `login`
--

INSERT INTO `login` (`username`, `password`, `Mobileno`) VALUES
('amankrs21', 'amanraj', 7079818064),
('client', 'client', 1234567890);

-- --------------------------------------------------------

--
-- Table structure for table `ticket`
--

CREATE TABLE `ticket` (
  `username` varchar(10) DEFAULT NULL,
  `T_Status` varchar(12) DEFAULT NULL,
  `Name` varchar(30) DEFAULT NULL,
  `Mob_no` bigint(12) DEFAULT NULL,
  `Departure` varchar(20) DEFAULT NULL,
  `Destination` varchar(20) DEFAULT NULL,
  `Class` varchar(10) DEFAULT NULL,
  `Age` int(3) DEFAULT NULL,
  `Flight_ID` varchar(14) DEFAULT NULL,
  `f_date` date DEFAULT NULL,
  `f_time` time DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `ticket`
--

INSERT INTO `ticket` (`username`, `T_Status`, `Name`, `Mob_no`, `Departure`, `Destination`, `Class`, `Age`, `Flight_ID`, `f_date`, `f_time`) VALUES
('amankrs21', 'Confirmed', 'Aman Kumar Singh', 7079818064, 'Vadodara', 'Dubai', 'First', 23, 'AIRINDIA1029', '2025-04-04', '21:04:00'),
('amankrs21', 'Confirmed', 'Roshani Singh', 9054797119, 'Vadodara', 'Dubai', 'First', 23, 'AIRINDIA1029', '2025-04-04', '21:04:00'),
('amankrs21', 'Confirmed', 'Jiva Singh', 9054718064, 'Vadodara', 'Dubai', 'First', 1, 'AIRINDIA1029', '2025-04-04', '21:04:00'),
('client', 'Confirmed', 'Aman Kumar Singh', 6202376207, 'Bangalore', 'Goa', 'Business', 18, 'AIRINDIA1055', '2021-11-21', '02:55:00');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `flight`
--
ALTER TABLE `flight`
  ADD PRIMARY KEY (`Flight_ID`);

--
-- Indexes for table `login`
--
ALTER TABLE `login`
  ADD PRIMARY KEY (`username`);
--
-- Database: `internal`
--
CREATE DATABASE IF NOT EXISTS `internal` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `internal`;

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `empID` int(5) DEFAULT NULL,
  `emp_name` varchar(25) DEFAULT NULL,
  `salary` decimal(10,2) DEFAULT NULL,
  `dept` varchar(15) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`empID`, `emp_name`, `salary`, `dept`) VALUES
(159, 'Aman Kumar Singh', '25000.00', 'Software'),
(131, 'Yash Raj', '21000.00', 'Technical'),
(167, 'Varunkumar Singh', '30000.00', 'Gamer'),
(161, 'Digpal Singh', '35000.00', 'Services'),
(171, 'Kartik Sonkusre', '35000.00', 'Banking');
--
-- Database: `php`
--
CREATE DATABASE IF NOT EXISTS `php` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `php`;

-- --------------------------------------------------------

--
-- Table structure for table `login`
--

CREATE TABLE `login` (
  `ID` int(2) NOT NULL,
  `Username` varchar(20) NOT NULL,
  `Password` varchar(18) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `login`
--

INSERT INTO `login` (`ID`, `Username`, `Password`) VALUES
(1, 'aman', 'singh'),
(2, 'yash', 'raj'),
(3, 'varunkumar', 'singh'),
(4, 'digpal', 'singh'),
(5, 'kartik', 'sonkusre'),
(6, 'kalpesh', 'patil');

-- --------------------------------------------------------

--
-- Table structure for table `login_registration`
--

CREATE TABLE `login_registration` (
  `Username` varchar(30) NOT NULL,
  `Name` varchar(30) NOT NULL,
  `Email` varchar(35) NOT NULL,
  `Passsword` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `login_registration`
--

INSERT INTO `login_registration` (`Username`, `Name`, `Email`, `Passsword`) VALUES
('aman21', 'Aman Kumar Singh', 'amansingh844123@gmail.com', 'aman'),
('amankrs21', 'Aman Kumar Singh', 'amansingh844123@gmail.com', 'amanraj');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `login`
--
ALTER TABLE `login`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `login_registration`
--
ALTER TABLE `login_registration`
  ADD PRIMARY KEY (`Username`);
--
-- Database: `phpmyadmin`
--

CREATE DATABASE IF NOT EXISTS `rdbms` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `rdbms`;

-- --------------------------------------------------------

--
-- Table structure for table `balance_details`
--

CREATE TABLE `balance_details` (
  `Client_No` varchar(6) DEFAULT NULL,
  `Name` varchar(20) DEFAULT NULL,
  `Balance` decimal(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `balance_details`
--

INSERT INTO `balance_details` (`Client_No`, `Name`, `Balance`) VALUES
('C0001', 'Roshan Joshi', '15000.00'),
('C0002', 'Mamta Muzumdar', '500.00'),
('C0003', 'Chhaya Bankar', '2000.00'),
('C0004', 'Ashwini Rathod', '7000.00'),
('C0005', 'Ivan Bayross', '1500.00'),
('C0006', 'Deepak Sharma', '4300.00'),
('C0007', 'Shymali Bhide', '2100.00');

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `cust_id` varchar(5) DEFAULT NULL,
  `Lname` varchar(15) DEFAULT NULL,
  `Fname` varchar(15) DEFAULT NULL,
  `Area` varchar(2) DEFAULT NULL,
  `phone_no` bigint(8) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`cust_id`, `Lname`, `Fname`, `Area`, `phone_no`) VALUES
('a01', 'Patel', 'Vijay', 'sa', 381334),
('a02', 'Saitwal', 'Vandana', 'mu', 556037),
('a03', 'Jaguste', 'Pramada', 'da', 372631),
('a04', 'Navindgi', 'Basu', 'ba', 666612),
('a05', 'Sreedhran', 'Ravi', 'va', 0),
('a06', '', 'Rukmini', 'ga', 512527);

-- --------------------------------------------------------

--
-- Table structure for table `customers`
--

CREATE TABLE `customers` (
  `Client_No` varchar(6) DEFAULT NULL,
  `Name` varchar(20) DEFAULT NULL,
  `Address` varchar(50) DEFAULT NULL,
  `City` varchar(20) DEFAULT NULL,
  `Pincode` bigint(8) DEFAULT NULL,
  `State` varchar(20) DEFAULT NULL,
  `Bal_Due` decimal(10,2) DEFAULT NULL,
  `Phone_no` bigint(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `customers`
--

INSERT INTO `customers` (`Client_No`, `Name`, `Address`, `City`, `Pincode`, `State`, `Bal_Due`, `Phone_no`) VALUES
('C0001', 'Roshan Joshi', 'Khapaitya Chakla', 'Surat', 395003, 'Gujarat', '1000.00', NULL),
('C0002', 'Mamta Mazumdar', 'Salt Lake', 'Kolkata', 460012, 'West Bengal', '5000.00', NULL),
('C0003', 'Chhaya Bankar', 'Worli', 'Mumbai', 400054, 'Maharashtra', '2000.00', NULL),
('C0005', 'Ivan Bayross', 'Indiranagar', 'Mangalore', 560050, 'karnataka', '1500.00', NULL),
('C0006', 'Deepak Sharma', 'Bandra', 'Mumbai', 400002, 'Maharashtra', '4300.00', NULL),
('C0007', 'Shymali Bhide', 'Juhu', 'Mumbai', 470912, 'Maharashtra', '2100.00', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `dept`
--

CREATE TABLE `dept` (
  `deptno` int(3) DEFAULT NULL,
  `dname` varchar(10) DEFAULT NULL,
  `location` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `dept`
--

INSERT INTO `dept` (`deptno`, `dname`, `location`) VALUES
(10, 'Accounting', 'New York'),
(20, 'Research', 'Dallas'),
(30, 'Sales', 'Chicago'),
(40, 'Operations', 'Boston');

-- --------------------------------------------------------

--
-- Table structure for table `emp`
--

CREATE TABLE `emp` (
  `Emp_no` int(5) DEFAULT NULL,
  `Ename` varchar(15) DEFAULT NULL,
  `Job` varchar(15) DEFAULT NULL,
  `Mgr` int(5) DEFAULT NULL,
  `hiredate` date DEFAULT NULL,
  `Sal` decimal(8,2) DEFAULT NULL,
  `Comm` int(4) DEFAULT NULL,
  `deptno` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `emp`
--

INSERT INTO `emp` (`Emp_no`, `Ename`, `Job`, `Mgr`, `hiredate`, `Sal`, `Comm`, `deptno`) VALUES
(7839, 'King', 'President', 0, '1981-11-17', '5000.00', 0, 10),
(7698, 'Blake', 'Manager', 7839, '1981-05-01', '2850.00', 0, 30),
(7782, 'Clerk', 'Manager', 7839, '1981-06-09', '2450.00', 0, 10),
(7566, 'Jones', 'Manager', 7839, '1981-04-02', '2975.00', 0, 20),
(7788, 'Scott', 'Analyst', 7566, '1987-07-13', '3000.00', 0, 20),
(7902, 'Ford', 'Analyst', 7566, '1981-12-03', '3000.00', 0, 20),
(7369, 'Smith', 'Clerk', 7902, '1980-12-17', '800.00', 0, 20),
(7499, 'Allen', 'Salesman', 7698, '1981-02-20', '1600.00', 300, 30),
(7521, 'Ward', 'Salesman', 7698, '1981-02-22', '1250.00', 500, 30),
(7654, 'Martin', 'Salesman', 7698, '1981-09-28', '1250.00', 1400, 30),
(7844, 'Turnor', 'Salesman', 7698, '1981-09-08', '1500.00', 0, 30),
(7876, 'Adams', 'Clerk', 7788, '1987-07-13', '1100.00', 0, 20),
(7900, 'James', 'Clerk', 7698, '1981-07-13', '950.00', 0, 20),
(7934, 'Miler', 'Clerk', 7782, '1982-01-23', '1300.00', 0, 10);

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `Employee_no` int(3) NOT NULL,
  `First_name` varchar(10) DEFAULT NULL,
  `Last_name` varchar(10) DEFAULT NULL,
  `Salary` decimal(8,0) DEFAULT NULL,
  `Joining_date` date DEFAULT NULL,
  `Department` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_no`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'John', 'Abraham', '100000', '2013-01-01', 'Banking'),
(2, 'Michael', 'Clarke', '80000', '2013-04-01', 'Insurance'),
(3, 'Roy', 'Thomas', '70000', '2013-05-21', 'Banking'),
(4, 'Tom', 'Jose', '60000', '2013-12-08', 'Insurance'),
(5, 'Jerry', 'Pinto', '65000', '2014-02-11', 'Marketing'),
(6, 'Philip', 'Mathew', '45000', '2014-01-07', 'Services'),
(7, 'John', 'Henry', '55000', '2015-01-01', 'Technical'),
(8, 'Ivan', 'Bayross', '60000', '2015-08-01', 'Sales');

-- --------------------------------------------------------

--
-- Table structure for table `incentives`
--

CREATE TABLE `incentives` (
  `Employee_Ref_Id` int(3) DEFAULT NULL,
  `Incentive_date` date DEFAULT NULL,
  `Incentive_amount` decimal(8,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `incentives`
--

INSERT INTO `incentives` (`Employee_Ref_Id`, `Incentive_date`, `Incentive_amount`) VALUES
(1, '2013-02-01', '5000.00'),
(2, '2013-12-01', '3000.00'),
(3, '2013-03-01', '4000.00'),
(4, '2015-04-21', '4500.00'),
(5, '2015-09-01', '3500.00');

-- --------------------------------------------------------

--
-- Table structure for table `invoice`
--

CREATE TABLE `invoice` (
  `inv_no` varchar(3) DEFAULT NULL,
  `my_no` int(5) DEFAULT NULL,
  `cust_id` varchar(5) DEFAULT NULL,
  `issue_date` date DEFAULT NULL,
  `return_date` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `invoice`
--

INSERT INTO `invoice` (`inv_no`, `my_no`, `cust_id`, `issue_date`, `return_date`) VALUES
('i01', 4, 'a01', '1996-01-13', '1996-01-25'),
('i02', 3, 'a02', '1996-02-12', '1996-02-15'),
('i03', 1, 'a02', '1996-02-15', '1996-02-18'),
('i04', 6, 'a03', '1996-03-10', '1996-03-13'),
('i05', 7, 'a04', '1996-02-05', '1996-02-08'),
('i06', 2, 'a06', '1996-03-18', '1996-03-21'),
('i07', 9, 'a05', '1996-01-07', '1996-01-10'),
('i08', 9, 'ao1', '1996-02-11', '1996-02-14'),
('i09', 1, 'a05', '1996-02-15', '1996-02-28');

-- --------------------------------------------------------

--
-- Table structure for table `movie`
--

CREATE TABLE `movie` (
  `my_no` int(5) DEFAULT NULL,
  `Title` varchar(25) DEFAULT NULL,
  `Type` varchar(10) DEFAULT NULL,
  `Star` varchar(25) DEFAULT NULL,
  `Price` decimal(8,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `movie`
--

INSERT INTO `movie` (`my_no`, `Title`, `Type`, `Star`, `Price`) VALUES
(1, 'Bloody Vengeance', 'action', 'Jackie Chan', '180.95'),
(2, 'The Firm', 'Thriller', 'Tom Cruise', '200.00'),
(3, 'Pretty Woman', 'Romantic', 'Richarge Gere', '150.00'),
(4, 'Home Alone', 'Comedy', 'Macaulay Culkin', '150.55'),
(5, 'The Fugitive', 'Thriller', 'Harrison Ford', '200.00'),
(6, 'Coma', 'Suspence', 'Michael Douglas', '100.00'),
(7, 'Dracula', 'Horror', 'Gray Oldman', '150.00'),
(8, 'Quick Charge', 'Comedy', 'Bill Murray', '100.00'),
(9, 'Gone with the Wind', 'Drama', 'Clarke Gable', '200.00'),
(10, 'Carry on Doctor', 'Comedy', 'Leslie Phillips', '100.00');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`Employee_no`);

--
-- Indexes for table `incentives`
--
ALTER TABLE `incentives`
  ADD KEY `Employee_Ref_Id` (`Employee_Ref_Id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `incentives`
--
ALTER TABLE `incentives`
  ADD CONSTRAINT `incentives_ibfk_1` FOREIGN KEY (`Employee_Ref_Id`) REFERENCES `employee` (`Employee_no`);
--
-- Database: `student`
--
CREATE DATABASE IF NOT EXISTS `student` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `student`;

-- --------------------------------------------------------

--
-- Table structure for table `semester_2`
--

CREATE TABLE `semester_2` (
  `Name` varchar(20) DEFAULT NULL,
  `Enroll` bigint(13) DEFAULT NULL,
  `Batch` varchar(1) DEFAULT NULL,
  `Branch` varchar(5) DEFAULT NULL,
  `City` varchar(15) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `semester_2`
--

INSERT INTO `semester_2` (`Name`, `Enroll`, `Batch`, `Branch`, `City`) VALUES
('Aman Kumar Singh', 200510101159, 'C', 'BCA', 'Vaishali'),
('Yash Raj', 200510101131, 'C', 'BCA', 'Hajipur'),
('Varunkumar Singh', 200510101167, 'C', 'BCA', 'Mumbai'),
('Digpal Singh', 200510101161, 'C', 'BCA', 'Delhi'),
('Kartik Sonkusre', 200510101171, 'C', 'BCA', 'Mumbai'),
('Kalpesh Patil', 200510101121, 'B', 'BCA', 'Mumbai');
--
-- Database: `test`
--
CREATE DATABASE IF NOT EXISTS `test` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `test`;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
