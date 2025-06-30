-- 연결 연산자

/* Oracle에서만 작동
SELECT ename || sal
  FROM emp;
*/

SELECT CONCAT(ename, sal)
  FROM emp;

SELECT CONCAT_WS(' - ', ename, sal)
  FROM emp;

SELECT CONCAT(ename, '의 월급은 ', sal, '입니다') AS 설명
  FROM emp;