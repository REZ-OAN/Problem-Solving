# yield is used to point the present state of the phenomena
# then it changes when get calls
def _next():
    yield 'cnn'
    yield 'espn'
    yield 'goat'
itr = _next()
## auto iterate 
print(next(itr));
print(next(itr));
print(next(itr));
print('from loop')
for x in _next():
    print(x)
def fib():
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a+b
for f in fib():
    if f>50 : 
        break
    print(f);
