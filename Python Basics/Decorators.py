import time
def calc_square(numbers):
    start = time.time()
    result = []
    for num in numbers:
        result.append(num**2)
    end = time.time()
    print('calc_square takes ',(end-start)*1000,'ms')
    return result
def calc_cube(numbers):
    start = time.time()
    result = []
    for num in numbers:
        result.append(num**3)
    end = time.time()
    print('calc_cube takes ',(end-start)*1000,'ms')
    return result
## this same thing canbe done with decorators
# in python it allows us to pass function as parameter of another function
def time_it(func):
    def wrapper(*args,**kwargs):
        start = time.time()
        result = func(*args,**kwargs)
        end = time.time()
        print(func.__name__,'tooks ',(end-start)*1000,'ms')
        return result
    return wrapper
@time_it
def Calc_sq(numbers):
    result = []
    for num in numbers:
        result.append(num**2)
    return result
@time_it
def Calc_cube(numbers):
    result = []
    for num in numbers:
        result.append(num**3)
    return result
## how the flow is works
"""
   first  when we call Calc_sq it triggers @time_it cause it is a wrapper 
    in @time_it 
    first executes start = time.time() line
    then next line executes result = func(*args,**kwargs)
    and this func is actually Calc_sq so here it triggers the function Calc_sq 
    then executes every statement in this function
    then execution goes from the next line end = time.time() line
    then executes remaining statements in @time_it
    then call goes to the caller funciton/ caller statement
"""
Numbers = range(1,1000001)
# sq_numbers = calc_square(Numbers)
# cube_numbers = calc_cube(Numbers)
sq_numbers = Calc_sq(Numbers)
cube_numbers = Calc_cube(Numbers)

