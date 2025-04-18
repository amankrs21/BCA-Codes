-- 3.	PL/SQL Program For Prime Number.

declare
num1 number;
num2 number;			
temp number;
	
begin
num1:=:Enter_Number;
num2:= 2;
temp:= 1;

for num2 in 2..num1/2
	loop
		if mod(num1, num2) = 0
		then
			temp:= 0;
			exit;
		end if;
	end loop;
	
	if temp = 1
	then
		dbms_output.put_line(num1||' is a Prime Number');
	else
		dbms_output.put_line(num1||' is NOT a Prime Number');
	end if;
end;
