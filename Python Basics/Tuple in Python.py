## tuple in python 
'''
it's a list which is can contain any type of data
we can't use pop,remove,insert,append,extend
we just can use max ,min, count()
'''
T1=tuple('GeeKsForGeeKs')
print(T1)
T2=(1,3,4,5,"geeks","gor")
print(T2)
T=(T1+T2)
print(T)
T=(1,2,4,5,4,3,4,5,' ',3,4,'For','Geeks','Geeks','For')
a=T.count(4)
print(a)
b=T.count('Geeks')
print(b)
print(len(T))
