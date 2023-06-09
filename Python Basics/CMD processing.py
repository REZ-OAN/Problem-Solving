import argparse
if __name__ == '__main__':
    ## positional Arguments
    ## to access the arguments in cmd you have to maintain the positions
    parser = argparse.ArgumentParser()
    parser.add_argument("num1",help = 'first Argument')
    parser.add_argument("num2",help = 'second Argument')
    parser.add_argument("operator",help = 'operator')
## must supply all the three arguments
    args = parser.parse_args()
    print(args.num1)
    print(args.num2)
    print(args.operator)
    a = int(args.num1)
    b = int(args.num2)
    if(args.operator =='+'):
        print(a+b)
    elif args.operator == '-':
        print(a-b)
    elif args.operator == '*':
        print(a*b)
    else :
        print(a/b)

    kings = argparse.ArgumentParser()
    ## optional arguments
    ## to access the arguments in cmd  
    # --name value
    ## in this method you can skip the arguments but results will be undefined or unpredictable
    # clearity about the process 
    kings.add_argument("--text",help = "A String without white spaces")
    kings.add_argument("--name",help = "author name") 
    argopt = kings.parse_args();
    txt = argopt.text;
    nam = argopt.name;
    print(txt+' '+nam)
    ## we can add a parameter to .add_argument() 
    ## ---> that is choices = [list of valid argument value] if we want to restict the input args
