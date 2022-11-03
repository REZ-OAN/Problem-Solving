# set() in python
'''
  no duplicate allowed
  always unordered

'''
## declaring
s=set()
s="Strings"
a=set(s)
print(a)
s=['Geeks','For','Geeks','FOR']
a=set(s)
print(a)
s={1,3,4}
s.add(3)
s.add(23)
s.add(2)
print(s)
## use update when you have to insert multiple value or list
s.update([10,23,3234])
print(s)

## removing element .remove(value)
## removing element .discard(value)
s=set([1,3,4,2,4,232,4,22,4,212,3,2123,232,2,34,213,1,2])
s.remove(4)
s.remove(232)
print(s)
s.discard(1)
print(s)
## .pop() only removes the last element from the set
## as we can't predict the order of set
## thus we can't determine which element will be deleted
s.pop()
print(s)
s.clear()
print(len(s))
## frozenset() it can't change while changing in original set
s=(1,1,3,4,5,4,3,4)
s=set(s)
print(s)
a=frozenset(s)
s.add(9)
print(s)
print(a)

## difference() is to refers the set which has - the given set
'''
let A,B are two sets
    A-B is given by
    A.difference(B)
    B-A is given by
    B.difference(A)
'''
A={19,1,3,1,2,3,2,4}
B={1,3,2,3,2,1}
print(A)
print(B)
print(A.difference(B))
print(B.difference(A))
## intersection(arg1,arg2,....) gives the common element among  the sets
print(A.intersection(B))
