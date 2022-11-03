i =10

if (i<15) :
    print("YES")
    
else :
    print("NO")

l=[1,3,4,2,6,3,5,9,10]

nl=[ x for x in l if x&1==0]
print(nl)

if (i>15) :
    print("NO")
elif (i<15) :
    print("Partially Correct")
else :
    print("Perfectly Matched")

### true_statement if condition else false_statement
a= 14 if i>15 else i
print(a)

if 1<i<=10 :
    print(1)
else :
    print(0)

if  10<333<292 :
    print(True)
else :
    print(False)


l=['rezoan','ahmed','abir']

for i in l :
    print(i,end=" ")
print()

d=dict([('xyz',123),('abc',456)])
for i in d :
    print("key : ",i,"    ","Value : ",d[i])

s="Geeks For Geeks"
for i in s:
    print(i)

for i in s :
    if i=='e'  or i=='s' :
        continue
    else :
        print(i,end=" ")
print()
for i in s :
    if(i=='r') :
        break
    else :
        print(i,end=" ")
print()
s="Rezoan"
for i in s :
    pass
print(i)

for i in range(1,10) :
    print(i,end=" ")
else  :
    print("\nHELL")
a=[1,3,4,23,3]
i=0
while i<len(a) :
    print(a[i],end=" ")
    i+=1
print()

while a :
    print(a.pop(),end=" ")
print()

print("Wah  \n"*10)

while a!=0 :
    a=int(input("Enter a number : "))
else  :
    print("Opps.. Loop breaks on trigger 0!")

## array is not sorted or we don't have to sort
## but we wanna print them in sorted order how?
a=[1,9,3,2,4,10,1,-19,-29]
for i in sorted(a) :
     print(i,end=" ")
print()
## you don't wanna print duplicates
for i in sorted(set(a)) :
    print(i,end=" ")
print()

## you wanna print in reverse order
for i in reversed(sorted(a)) :
    print(i,end=" ")
print()

for i in range(1,12,2) :
    print(i,end=" ")
print()

