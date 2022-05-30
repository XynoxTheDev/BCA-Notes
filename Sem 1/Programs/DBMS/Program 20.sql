REM   Script: part B 20
REM   lab program
set serveroutput on
edit sqlp20

declare 
year number; 
begin 
year :=2022; 
If mod(year,4)=0 and mod(year,100) !=0 then 
dbms_output.put_line(year ||' is a leap year'); 
else 
dbms_output.put_line(year ||' is not a leap year'); 
end if; 
end;
/

@sqlp20