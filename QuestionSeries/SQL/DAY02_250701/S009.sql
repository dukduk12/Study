-- 산술 연산자 (* / + -)
-- SQL Query 실행 순서 잊지 말기
SELECT ename, sal*12 as '연봉'
  FROM emp
  WHERE sal*12 >= 36000; --여기에 '연봉' , 2를 넣으면 filtering이 안 됨 [실행 순서를 잊지 말기]

SELECT ename, sal, comm, sal + comm
  FROM emp
  WHERE deptno = 10;

-- MySQL은 NULL을 대체값으로 채울 때 IFNULL(해당 컬럼,대체값)
-- ORCALE은 NVL(해당 컬럼, 대체값)으로 한다.
SELECT ename, sal, comm, sal + IFNULL(comm, 0) AS total_income
  FROM emp
 WHERE deptno = 10;
