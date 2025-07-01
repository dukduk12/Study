-- 비교 연산자 (IN) ***
-- IN 연산자는 = 연산자와는 다르게,
-- 여러 리스트의 값을 조회할 수 있다.
SELECT ename, sal, job
  FROM emp
  WHERE job in ('SALESMAN', 'ANALYST','MANAGER');

SELECT ename, sal, job
  FROM emp
  WHERE job NOT in ('SALESMAN', 'ANALYST','MANAGER');