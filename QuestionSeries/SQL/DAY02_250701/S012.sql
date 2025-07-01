-- 비교 연산자 (LIKE)
SELECT ename, sal
  FROM emp
  WHERE ename LIKE 'S%';

SELECT ename, sal
  FROM emp
  WHERE ename LIKE '_M%';

SELECT ename, sal
  FROM emp
  WHERE ename LIKE '%A%'; -- 이름에 A가 들어간 사람들 모두