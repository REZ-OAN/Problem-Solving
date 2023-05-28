def calcSq(x):
    print("__name__ from calcSq : ",__name__)
    return x*x;
## entry point in python 
if __name__ == "__main__" :
    print("I'm From Main in PythonMain")
    a =calcSq(4)

    print("area : ",a)