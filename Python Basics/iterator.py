a = ['a','b','c','d','e']
for i in a:
    print(i)
itr = iter(a)
print(next(itr)) 
class RemoteControl():
    def __init__(self):
        self.channels=['HBO','Time','CNN','JITEX','ESPN']
        self.index = -1
    def __iter__(self):
        return self
    def __next__(self):
        self.index +=1
        if self.index == len(self.channels):
            raise StopIteration
        return self.channels[self.index]
r = RemoteControl()
itr = iter(r)
print(next(itr))
print(next(itr))
print(next(itr))
print(next(itr))
print(next(itr))
print(next(itr))
