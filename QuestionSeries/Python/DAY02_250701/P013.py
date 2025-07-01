# for ~ else문
# else문은 for 구문이 모두 실행되었을 때 실행할 코드 = break로 끝난건 모두 실행된 게 아님
# break 유/무로 결과 예측해보기
scope = [1,2,3]

for x in scope:
    print(x)
    break
else:
    print("Perfect")