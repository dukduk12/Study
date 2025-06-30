-- 데이터를 정렬해서 출력하기
SELECT ename, sal
  FROM emp
  ORDER BY sal asc;

SELECT ename, sal as '월급'
  FROM emp
  ORDER BY '월급' asc;


SELECT ename, deptno, sal
  FROM emp
  ORDER BY deptno asc, sal desc;

SELECT ename, deptno, sal
  FROM emp
  ORDER BY 2 asc, 3 desc;