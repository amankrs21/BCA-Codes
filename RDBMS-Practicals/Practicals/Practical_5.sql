use rdbms;

INSERT INTO `Movie` 
(`my_no`, `Title`, `Type`, `Star`, `Price`) 
VALUES 
('1', 'Bloody Vengeance', 'action', 'Jackie Chan', '180.95'), 
('2', 'The Firm', 'Thriller', 'Tom Cruise', '200'), 
('3', 'Pretty Woman', 'Romantic', 'Richarge Gere', '150'), 
('4', 'Home Alone', 'Comedy', 'Macaulay Culkin', '150.55'), 
('5', 'The Fugitive', 'Thriller', 'Harrison Ford', '200'), 
('6', 'Coma', 'Suspence', 'Michael Douglas', '100'), 
('7', 'Dracula', 'Horror', 'Gray Oldman', '150'), 
('8', 'Quick Charge', 'Comedy', 'Bill Murray', '100'), 
('9', 'Gone with the Wind', 'Drama', 'Clarke Gable', '200'), 
('10', 'Carry on Doctor', 'Comedy', 'Leslie Phillips', '100');

SELECT * FROM Movie;
