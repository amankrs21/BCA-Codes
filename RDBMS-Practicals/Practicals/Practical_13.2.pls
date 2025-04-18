-- 2.	PL/SQL Program To add Two Numbers.

DECLARE
num1 integer;
num2 integer;
add integer;

BEGIN
num1 := 21;
num2 := 4;

add := num1 + num2;

DBMS_OUTPUT.PUT_LINE(' Addition of '||num1||' and '||num2||'  is -> '||sum);

END;
/
