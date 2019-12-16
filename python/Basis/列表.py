#序列是Python中最基本的数据结构。序列中的每个元素都分配一个数字 - 它的位置，或索引，第一个索引是0，第二个索引是1，依此类推。
#序列都可以进行的操作包括索引，切片，加，乘，检查成员。

# !/usr/bin/python3

list1 = ['Google', 'Runoob', 1997, 2000];
list2 = [1, 2, 3, 4, 5, 6, 7];

print("list1[0]: ", list1[0])
print("list2[1:5]: ", list2[1:5])


#更新列表
# !/usr/bin/python3

list = ['Google', 'Runoob', 1997, 2000]

print("第三个元素为 : ", list[2])
list[2] = 2019
print("更新后的第三个元素为 : ", list[2])



#删除列表
# !/usr/bin/python3

list = ['Google', 'Runoob', 1997, 2000]

print("原始列表 : ", list)
del list[3]
print("删除第三个元素 : ", list)
print(len(list))        #输出列表元素个数
print(max(list2))       #输出列表最大元素
print(min(list2))       #输出列表最小元素
