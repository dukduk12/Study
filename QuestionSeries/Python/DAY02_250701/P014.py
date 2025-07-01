# while ~ continue ~ break문
# continue에 주의하기!
x=0

while x < 10:
    x = x+1
    if x < 3:
        continue # while loop으로 즉시 올림
    print(x)
    if x > 7:
        break

y = 1
total = 0

while 1: # True = 1 & False = 0
    total = total + y
    if total > 100000:
        print(y)
        print(total)
        break
    y = y+1