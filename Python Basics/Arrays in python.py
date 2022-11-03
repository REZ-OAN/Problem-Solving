# arrays in python

import array  as ar

'''
name.array(data_type,elements in third braces)
data types
int -> 'i'
double -> 'd'
float -> 'f'
'''
a=ar.array('i',[1,3,4,2,4,2,4,22,4])
for i in a :
      print(i,end=" ")
print()
a.insert(len(a),23)
print(list(a))
a.insert(1,34)
print(list(a))
a.append(100)
print(list(a))

# accessing element
print(a[1])
print(a[3])

#removing element from array
a.pop()
print(list(a))
a.pop(4)
print(list(a))

# slicing an array
print(list(a[1:-2]))
print(list(a[3:7]))
print(list(a[:5]))
print(list(a[-4:]))

# searching in array
#.index(val) it gives the 1st occurence of the 
#element
#if the element is not there then it returns a exception
print(a.index(3))