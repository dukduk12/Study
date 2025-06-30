# ★ 자료형 출력
# ★ 줄 바꿈 : (1) \n & (2) end =""
# ★ (1) format & (2) f-string
a = 200
msg = "I love Python"
list_data = ['a','b','c']
dict_data = {'a':97, 'b':98}

print("a value: ", a)
print("msg value: ", msg)

print("list value: " ,list_data)
# method (1) : fomatting
for i in range(len(list_data)):
    print("Index {0}: {1}".format(i, list_data[i]))
# method (2) : f-string
for i, val in enumerate(list_data):
    print(f"list_data[{i}] = {val}")


print(dict_data)
# method (1) : fomatting
for k, v in dict_data.items():
    print("Key: {}, Value: {}".format(k, v))
# method (2) : f-string
for k, v in dict_data.items():
    print(f"dict_data['{k}'] = {v}")