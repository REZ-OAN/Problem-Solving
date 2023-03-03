## for print
print("Hello WOrld")
## no need to specify the type
## automatically recognize them
## but as a string
## just you need to typecast the variables
n=3
x=3.34
y="hELL NO"
print(n," ",x," ",y)

##wanna know the keywords used in python
import keyword

print("The list of keyword\n"," ",keyword.kwlist)

##Multiline statements
s=1+3+5+\
    7+9+\
        11+13

print(s)
"""
for multiline comments use this methods
for better utilizing the program

"""
## conditional Initialization

a= 1 if 20>10 else 0
print(a)

## input
## in python it converts the input value into a string
name=input("Enter Your Name : ")
print("The nerd is ",name)

## when you need integer or float
x=int(input())
y=float(input())
print(x+y,"Here x is a ",type(x)," and ","y is a ",type(y))

## taking multiple input


## we use input().split(separator,maxsplit)
x,y=input("Enter Two Numbers : ").split()
print("X : ",x,"\nY : ",y)
x,y,z=input("Enter Three Numbers : ").split()
print("X : ",x,"\nY : ",y,"\nZ : ",z)

## 2nd method
x,y=[int(x) for x in input().split()]
print("X : ",x,"\nY : ",y)
x,y,z=[int(i) for i in input().split()]
print("X : ",x,"\nY : ",y,"\nZ : ",z)



## when you want to input an array
x=list(map(int,input().split()))
print(x)
## 2nd method
x=[int(i) for i in input().split()]
print(x)

## example with separator and maxsplit
## formatted input 
## separator =mane kon char dekhe separate korbe input gulo
## maxsplit first koyta input ke split kore varibale e rakhbe baki ja thakbe ta ekta variable er moddhe jabe

x=[x for x in input().split("^",2)]
print(x)

x,y,z=input().split(',',2)
print(x)
print(y)
print(z)

## formatted output
a=20
b=11
c=1999
print(a,b,c,sep="-",end=" **")
print("My Birthday ")

print("Abir loves",end=" ")
print("Roses")
## for single line output
x=[1,3,5,7,9]
print(*x)

## operator
"""
   #Arithmetic operator
   +  addition
   -  subtract
   *  product
   /  float division
   // integer division (gives floor value)
   ** power
   %  mod operator (only for integer)
   # Assignment Operator
   +=
   -=
   *=
   /=
   //=
   **=
   %=
   &=
   |=
   ^=
   <<=
   >>=

   # Conditional operator
   > >=
   < <=
   !=
   ==


   # Celational operator
   and 
   or
   not
   # Bitwise operator
   &
   |
   ~  toggle
   ^
   >>  right shift
   <<  left shift
   
   # Identity and Membership Operator
   is 
   is not
   in 
   not in
   # ternary operator
   [statement on true] if [condition] else [statement on false]


"""
a=10
b=20
x= a if a>b else b
print(x)

"""
   ## operator function
   import operator -> library
   .add(a,b)
   .sub(a,b)
   .mul(a,b)
   .pow(a,b)
   .mod(a,b)
   .truediv(a,b)
   .floordiv(a,b)
   .lt(a,b)->only less than
   .le(a,b)-> less than or equal
   .gt(a,b)
   .ge(a,b)
   .eq(a,b)->equal to
   .ne(a,b)->not equal to
   list_name->ln
   position->pos
   value->val
   .setitem(ln,pos,val)-> replace previous value
   .delitem(ln,pos)->delete that item
   .getitem(ln,pos)-> show that item
    here r is exclusive
   .setitem(ln,slice(l,r),vals)->replace l to r values with given value
   .delitem(ln,slice(l,r))-> delete item in the range of l to r
   .getitem(ln,slice(l,r))->get those item in the range of l to r
   .concat(s1,s2)
   .contains(s1,s2)->substring ase kinai
   .and_(a,b)
   .or_(a,b)
   .xor_(a,b)
   .invert(a,b) 
"""
import operator
## ex
x=int(operator.add(3,4.5))
print(x)
x=[1,4,5,6,7]
print(x)
operator.setitem(x,2,10)
print(x)
operator.delitem(x,3)
print(x)
y=operator.getitem(x,slice(0,3))
print(y)


## is operator checks for the address is same or not
## == operator check for the value is same or not
