import numpy as np
x = np.arange(16).reshape(4,4)
# np.savetxt('text.txt',x)
y = np.loadtxt('text.txt');
print(y)