REM   Script: part B 18
REM   lap program
set serveroutput on
edit sqlp18

declare 
a int; 
b int; 
c int; 
d int; 
e int; 
f int; 
begin 
a :=10; 
b :=5; 
c :=a+b; 
d :=a-b; 
e :=a*b; 
f :=a/b; 
dbms_output.put_line('addition of two numbers:'  ||c); 
dbms_output.put_line('subtraction of two numbers:'  ||d); 
dbms_output.put_line('multiplication of two numbers:'  ||e); 
dbms_output.put_line('division of two numbers:'  ||f); 
end;
/

@sqlp18