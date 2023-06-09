mub = [1,10,20,3,4,5,3,2,4,2,6,8,10,20]
## easiest way to map data from a list 
even =[int(i) for i in mub if i%2==0]
print(even)
sq_mub = [int(i*i) for i in mub]
print(sq_mub)
## unordered and unique
## {} curly braces

s = set(mub);
print(s)
even = { i for i in mub if i%2==0}
print(even)
## you have two list one is for key and one is for value
## then you can create a tuple using zip
name =['Carren','lipoPoth','urbanAhm','lukas']
id =[19,23,33,2]
students = zip(id,name)
for s in students:
    print(s)
## using curly braces we will get a dictionary
stu = {id:name for id,name in zip(id,name)}
print(stu)
