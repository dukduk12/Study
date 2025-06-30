-- 테이블에서 특정 열(column) 선택하기
-- 대/소문자 상관 없음
SHOW databases;

USE test;

SELECT empno, ename, sal
  FROM emp;