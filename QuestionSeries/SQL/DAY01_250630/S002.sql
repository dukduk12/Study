-- 테이블에서 모든 열(Column) 출력하기
SELECT *
  FROM emp;

SELECT empno, empno, job, mgr, hiredate, sal, comm, deptno
  FROM emp;

SELECT *
  FROM dept;

SELECT dept.*, deptno
  FROM dept;