# for ~ continue ~ break문
# for [변수] in [범위]:
#       ...
#   continue -> 다음 반복문 수행
#       ...
#   break -> for문 탈출 
scope =[1,2,3,4,5]

# 1) method 1
for x in scope:
    print(x)
    if x < 3:
        continue
    else:
        break

# 2) method 2
for x in scope:
    print(x)
    if x >= 3:
        break