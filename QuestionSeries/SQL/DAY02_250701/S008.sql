-- WHERE절 (문자 & 날짜) ***
-- MySQL DATE_FORMAT() function : https://www.w3schools.com/mysql/func_mysql_date_format.asp
SELECT ename, sal, job, hiredate, deptno
  FROM emp
  WHERE ename = 'SCOTT';

-- MySQL에서는 'YYYY-MM-DD' 형식만 안전하게 인식함
SELECT ename, hiredate
  FROM emp
  WHERE hiredate = '1981-11-17'; --'81/11/17'은 ORACLE

SELECT ename,
       DATE_FORMAT(hiredate, '%Y, %m-%d') AS formatted_date
  FROM emp
 WHERE hiredate = '1981-11-17';