## dictionary in python
'''
It's one kind of hashing datastructure
works like map
 key ,value
'''
d={1 : 'geeks', 2: 'Abir',3 : 'for',4 : 'Ahmed',5 : 'Geeks'}
for i in range(1,6) :
     if i%2==1 :
        print(d[i],end=" ")
print()
for  i in range(1,6) :
    if i%2==0 :
        print(d[i],end=" ")
print()
## we can create nested dictionary
d={'A' : 'Apple','B' : 'Blue Berry','C' :{1 : 'Mango',2 : 'Orange',3 : 'Malta'}}
print(d['C'][2])
print(d['B'])

d=dict([(1,'geeks'),(2, 'for')])
for i in range(1,3) :
    print(d[i],end=" ")
print()
print(d.get(2))

d=dict([(1,['geeks','for','geeks']),(2,['Rezoan','Ahmed','Abir'])])
## .key() returns the keys of the dictionary in a list
print(d.keys())
## .pop(key) remove the specified key
## .popitem() remove the last key-value pair
print(d)
d.pop(1)
print(d)
d[1]=['geeks','for','geeks']
d[3]=['hello','world','yo yo']
print(d)
d.popitem()
print(d)
## values() returns all the values of the keys present in the dictionary
print(d.values())