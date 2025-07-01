-- 비교 연산자 (BETWEEN AND)
SELECT ename, sal
  FROM emp
  WHERE sal BETWEEN 1000 AND 3000;

SELECT ename, sal
  FROM emp
  WHERE (sal >= 1000 AND sal <= 3000);
  
SELECT ename, sal
  FROM emp
  WHERE sal NOT BETWEEN 1000 AND 3000;

SELECT ename, sal
  FROM emp
  WHERE (sal >= 1000 OR sal <= 3000);