import time
import threading
def calc_sq(numbers):
    print('Calculating Squares')
    for n in numbers:
        time.sleep(.2)
        print('square',n**2)
def calc_cube(numbers):
    print('Calculating Cubes')
    for n in numbers:
        time.sleep(.2)
        print('cube' ,n**3)
t = time.time()
arr  = [2,3,8,9]
calc_cube(arr)
calc_sq(arr)
print("Time Taken : ",(time.time()-t)*1000,'ms')

## using threading concept (efficient use of time )(parallel running of threads)
t = time.time()
## create threads
Thread1 = threading.Thread(target=calc_sq,args=(arr,))
Thread2 = threading.Thread(target=calc_cube,args=(arr,))
## run threads (parallely start both)
Thread1.start()
Thread2.start()

## join one thread means wait until the thread is done running
Thread1.join()
Thread2.join()
print('Done In : ',(time.time()-t)*1000,'ms')

