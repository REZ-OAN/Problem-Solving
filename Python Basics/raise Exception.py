## deriving accident class from python Exception class
class Accident(Exception):
    def __init__(self,msg):
        self.msg = msg
        self.ment = msg + 'here woof'
    def print_exception(self):
        # self.ment  = self.msg
        print('User Defined Exception : ',self.msg)




try:
    raise Accident('Crash Between Two Objects ')
except Accident as e :
    e.print_exception()
a = Accident('Hello')
print(a.ment)
# print(a.ment)
## after catching all the exception the execution leave from the block
## but if we want to do something after the exception call we use finally:
# def process_file():
#     try:
#         f=open('Problem-Solving\\Python Basics\\fun.txt')
#         x = 1/0
#     except FileNotFoundError as e:
#         print(e)
#     f.close()
# ## the f.close() file did not execute
# process_file() 
## so 
def process_file():
    try:
        f=open('Problem-Solving\\Python Basics\\fun.txt')
        x = 1/0
    except FileNotFoundError as e:
        print(e)
    finally:
        print('Closing File')
        f.close()
process_file()