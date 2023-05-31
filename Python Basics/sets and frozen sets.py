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
## but an empty element cant create a set
a = {''}
print(type(a))
print(a)