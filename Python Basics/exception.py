[x,y] = [int(x) for x in input().split()]
try:
    z = x/y
except Exception as e :
    print('Exception Occured : ',e,'Type of the Error : ',type(e).__name__)
    z = None
print("Division is : ",z)