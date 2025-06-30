-- WHERE 절 (숫자 데이터 검색)
SELECT ename, sal, job
  FROM emp
  WHERE sal = 3000;

SELECT ename, sal, job
  FROM emp
  WHERE sal >= 3000;

SELECT ename, sal as '월급', job
  FROM emp
  WHERE '월급' >= 3000;
-- [error] line 11 -> line 12 -> line 13 순으로 실행됨 --