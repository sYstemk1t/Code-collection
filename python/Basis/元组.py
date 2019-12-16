#访问元组
# !/usr/bin/python3

tup1 = ('Google', 'Runoob', 1997, 2000)
tup2 = (1, 2, 3, 4, 5, 6, 7)

print("tup1[0]: ", tup1[0])
print("tup2[1:5]: ", tup2[1:5])

#修改元组
# !/usr/bin/python3

tup1 = (12, 34.56);
tup2 = ('abc', 'xyz')

# 以下修改元组元素操作是非法的。
# tup1[0] = 100

# 创建一个新的元组
tup3 = tup1 + tup2;
print(tup3)

#删除元组
# !/usr/bin/python3

tup4 = ('Google', 'Runoob', 1997, 2000)

print(tup4)
del tup4
print("删除后的元组 tup : ")
print(tup4)