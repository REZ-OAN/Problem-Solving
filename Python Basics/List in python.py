# list in  python 
'''
  Dynamic Array like vectors in c++
  creating a list
  L=[]
  initialization
  L=[10,20,30]
  But difference is we can store different type of data in a list
  L=[120,10,'Geeks','al',1991]
  multidimentional list
  L=[[10,20,30],[10,15,20]]
  we can access data with negative indexing
'''
## taking input in list
s=input()
a=s.split(' ')
print(a)
'''
   But in this method every index contains a 
   string so we need to convert it to integer
   to use as a number
'''
##size of the list
n=int(input())
## using map we get the specific data types value
'''
  list(map(data_type,input().strip().split()))[:size]
'''
a=list(map(int,input().strip().split()))[:n]
print(a)
## using list comprehension and typecasting
a=[int(x) for x in input().split()]
## here no need to specify the size1
print(len(a))
print(a)
a=[str(x) for x in input().split()]
print(len(a))
print(a)
## getting input to 2d list
## .append() to insert element to the back
n,m= [int(x) for x in input().split()]
l=[]
for i in range(0,n) :
    val=list(map(int,input().strip().split()))[:m]
    l.append(val)

print(l)
## .insert(pos,element)
a=[1,2,3,4]
a.insert(0,0)
a.insert(2,19)
print(a)
## .extend or .append only insert elements to the end of the list
## .extend concate two lists
## .append concate only one value
## complexity in extend method O(n)
##            in append method O(1)
##            in insert method O(n)
a.extend([10,11,12])
print(a)
## reversing a list
a.reverse()
print(a)
## .remove(val) just remove a specific value
## duplicate value thakle only one will be removed
## first occurrence ta shudu
## .remove() time complexity O(n)

a=[1,1,2,3,3,3,2,4]
a.remove(2)
print(a)
## .pop() without arg will delete the last element here complexity O(1)
## .pop() with arg will delete a value on the specific position here complexity O(n)
a.pop()
print(a)
a.pop(3)
print(a)

## list comprehension
## create a default list with specific condition
l=[int(x) for x in input().split()]
print(l)
l=[int(x*x) for x in range(1,12) if x%2==0]
print(l)
l=[int(x) for x in range(1,10) if  x%2==1]
print(l)

## 2d matrix
n=int(input())
a=[[int(x) for x in input().split()] for i in range(0,n)]
print(a)
for i in range (0,n) :
    print(len(a[i]),": ",a[i])
s="Rezoan Ahmed Abir"
a=[x for x in s]
print(a)
## list all the numbers from 1 to n
## which is divided by 2 and 3
n=int(input())
a=[x for x in range(1,n+1) if(x%2==0 and x%3==0)]
print(a)
def ds(n) :
  n=int(n)
  s=0
  while n!=0 :
     s+=int(n%10)
     n/=10
  return s
l=[367, 111, 562, 945, 6726, 873]
a=[ds(x) for x in l ]
print(a)
a=[x*10 for x in range(1,11)]
print(len(a))
a.clear()
print(len(a))

## splicing of a list
a=[x for x in range(1,21)]
b=a[1:-2]
print(b)
c=a[-5 : -1]
print(c)
## list[a:b] a to b (exclusive)

a=[3,2,-1,-20,35,32]
a.sort() ## sort in ascening order
print(a)
a.sort(reverse=True) ## sort in descending order
print(a)

## parameterized sorting 
## sorting with comparator function
def comp1(a) :
    return a[0]
def comp2(a) :
    return a[1]
## comp1 sort by 1st element
## comp2 sort by 2nd element
l=[(1,3),(2,1),(3,2)]
l.sort(key=comp1)
print("Sort By 1st element : ",l)
l.sort(key=comp2)
print("Sort By 2nd element : ",l)

## sort by 1st element in reverse order
l.sort(key=comp1,reverse=1)
print("Sort by 1st element in descending order : ",end=" ")
print(l)
a=[19,12,3,12,3,223,23]
print(max(a))
a=['geeks','rezoan','skf','dk']
## by default is given the maximum lexiographic value
print(max(a))
## but is we use key=
## then we can find the maximum len string
print(max(a,key=len))
## min() works as the max() function just returns min values

'''
   map(arg1,arg2)
   arg1 is a function
   arg2 is a container
   creates a new container 
   based on the fuction

'''
def sq(n) :
  return n*n
a=[1,3,5,7]
b=map(sq,a)
b=list(b)
print(b)
## only for list of string
l=['sat','bat','cat','mat']
l=list(map(list,l))
print(l)

## lambda function is like inline function
## but it requires only one statement to execute
s="Rezoan Ahmed Abir"
rev_up= lambda x : x.upper()[::-1]

s=rev_up(s)
print(s)

## number formatting
num_for= lambda x : f"{x:e}" if isinstance(x,int) else f"{x:,}"
a=1203232
b=10293829283.393292033
print(num_for(a))
print(num_for(b))
cube= lambda x : x*x*x
print(cube(3))

l=[lambda a=x : a*10 for x in range(1,6)]
for item in l :
     print(item(),end=" ")

## using with other built in fucntion

a= [5, 7, 22, 97, 54, 62, 77, 23, 73, 61]
## list of the odd elements
l= list(filter(lambda x : (x%2==1),a))
print("Initial List : ",a)
print("Final List : ",l)
## list of the double of the elements in list a
l=list(map(lambda x : 2*x,a))
print(l)
## list of the double of even elements in list a
l=list(map(lambda x : 2*x,list(filter(lambda x: (x%2==0),a))))
print(l)

l1=[1,2,3,4]
l2=[4,3,2,1]

l=list(map(lambda x,y : x+y,l1,l2))
print(l)