# 자료형
int_data = 1 # 수치형 : 정수/실수/복소수
print(type(int_data))

float_data = 3.14
print(type(float_data))

complex_data = 1 + 5j # 복소수
print(type(complex_data))

str_data1 = 'I love Python'
print(type(str_data1))

str_data2 = "안녕"
print(type(str_data2))

list_data = [1,2,3] # 임의의 객체를 [[순서 있게]] 나열한 자료형
print(type(list_data))

tuple_data = (1,2,3) # 리스트와 비슷하나 요소 값을 변경할 수 없음
print(type(tuple_data))

dict_data = {0:"False", 1:"True"} # 키와 값으로 구성된 [[순서가 없는]] 자료형
print(type(dict_data))