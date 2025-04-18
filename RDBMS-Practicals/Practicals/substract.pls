-- declare
-- x number(5);            
-- y number(5);           
-- z number(7);       
 
-- begin
-- x := 20;
-- y := 5;

-- z := x - y;                

-- dbms_output.put_line('Substraction is -> '|| z);

-- end;
-- /


DECLARE
i number(5);            
j number(5);           
s number(7);
begin
i:=:i;      -----observe this statement. This statement will tell the machine to take input of i through user.
j:=:j;      -----observe this statement. This statement will tell the machine to take input of j through user.
s:=i+j;
dbms_output.put_line('sum of '||i||' and '||j||' is '||s);     
end;
