REM   Script: part B 19
REM   lab program
set serveroutput on
edit sqlp19

declare   
a int;  
b int;  
begin  
a :=&a;  
b :=&b;  
if(a>b) then  
dbms_output.put_line('greater number is' ||a);  
else  
dbms_output.put_line('greater number is ' ||b);  
end if;  
end;
/

@sqlp19