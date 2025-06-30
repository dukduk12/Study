-- 컬럼 별칭을 사용하여 출력되는 컬럼명 변경하기
SELECT empno as 사원번호, ename as 사원이름, sal as "Salary"
  FROM emp;

SELECT ename, sal *(12 + 3000) as 월급
  FROM emp;