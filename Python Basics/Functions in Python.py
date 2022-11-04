
## functions in python
'''
 keyword def
  def function_name(parameters) :
    statements
    return expression
'''
def isprime(n) :
    ## this value will printed on the screen when function_name._doc_ called
    """Function Checks That Given Integer Is Prime Or Not"""
    n=int(n)
    if(n<=1) :
         return False
    elif(n==2) :
         return True
    else :
        i=2
        while i*i<=n :
            if(n%i==0) :
                return False
            i+=1
        return True
# driver code
print(isprime(102))

## function with default arguments
'''
left to right assign hoy c++ er motoi
that means
sum(x=12,y,z=49) will give errors
sum(x=12,y=12,z) will give errors
we have to give default arguments to the right as possible

'''
def sum1(x,y,z=18) :
    return x+y+z

ans=sum1(4,4)
print(ans)
## we can do this in python
## this known ase keyword arguments
ans=sum1(y=100,x=19,z=19)
print(ans)

## for variable length arguments 
## argv creates a list of the passed arguments
def display(*argv) :
    for v in argv :
        print(v)

display('Greeks','Are','More','Logical','When','Talking','About','Geometry')

def display(**kwargs) :
    for k,v in kwargs.items() :
         print("Key : " ,k," Value : ",v)

## we have to pass value with a keyword
display(dict='geeks',list='for')


print(isprime.__doc__)

def fun0(x) :
    x[0]=100
l=[10,200,300]
fun0(l)
print(l[0])
def fun1(x) :
    x[0]=101
    x[1]=102
    x[2]=103
    x.append(104)
fun1(l)
print(l)
def fun2(x) :
    print("Befor Hello From --")
    print(x)
    ## here this will refer to a new list 
    print("Hello from --")
    x=[10,20,30,40] 
    print(l)
    print(x)
fun2(l)
print("Out of Function")
print(l)

def fun3(x) :
    ##before create new object
    print("Before Creating New object : ",x)
    x=10
    print("After Creating New Object : ",x)
l=100
fun3(l)
print(l)

def swap(x,y) :
    temp=x
    ## here the reference is broke down
    x=y
    y=temp
x,y=[int(i) for i in input().split()]
print("x : ",x,"y : ",y)

## lambda Function
'''
   Properties of Lambda Function :
    -> Can take any number of arguments/parameter
    -> Only operate one expression for return and execute
    like 
    def fu(parameter) :
        return expression_using_those_parameters 
'''
cube=lambda x : x**3
print(cube(3))
det=lambda x : "Even Number " if x%2 == 0 else "ODD Number"
print(det(3))
print(det(56))
s=sum([1,3,4,5],0)
sod=lambda x : sum([int(i) for  i in str(x)],0)
print(sod(1012))

## nested funtion
def f1() :
    s = 'I love Boooooo'
    def f2() : 
        print(s)
        '''
        below statement will gives us error
        why? we can't reallocate local variables in nested function
        '''
        ##s = 'I love Money'
        # print(s)
    f2()
    s=" Hell"
    f2()
f1()

def fun(*a) :
    for i in a :
        print(i)
l=('fuck','luck','duck','buck')
fun(*l)
def fun(**a) :
    for i,j in a.items():
        print(i , "  ", j)

d={'a' : "Abir" , 'b' : "betal",'c' : "Camel"}
fun(**d)

## global variable and local variable
def f() :
    s="Hello From Local"
    print(s)
s="Hello From Global"
print(s)
f()
print(s)

def f1() :
    ## we can't update global variables
    '''
    s+='GFG'
    '''
    ## have to use global keyword to modifiy global variables
    global s
    s+=' GGG'
    print(s)
    s="GOG"

s="Hello From Global"
f1()
print(s)




def swap() :
    global x,y
    temp=x
    x=y
    y=temp


x,y=[int(i) for i in input().split()]
swap()
print("x : ",x,"y : ",y)