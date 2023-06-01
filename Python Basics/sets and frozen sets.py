basket = {'orange','apple','mango','lichi','mango','orange'}
print(basket)
print(type(basket))
## don't create blank set using {} ,it recognizes this as a dictionary
a = set()
print(a)
a.add(1)
a.add(3)
a.add(3)
a.add(5)
a.add(5)
print(a)
print(type(a))
## but here
a={}
print(type(a))
## but an empty element can create a set
a = {''}
print(type(a))
print(a)
## set takes list as an parameter of it's constructor
p = [1,2,2,3,4,4,3,3]
a = set(p)
print(a, type(a))
fs = frozenset(p)
print(fs)
## don't allow add new element
# fs.add(5)
x = {'a','b','c'}
y = {'b','c','d'}
## order maintain kore na set union operation using |
print(x|y)
## inter section using & 
print(x&y)
## set difference
print(x-y)
## is subset of y
print(x<y)
x = {'b','c'}
print(x<y)

