import modules.mymod as mk
"""
if we want to use module from another directory
then we have to 
import sys
sys.path.append(directory path for the module)
then 
import the module you want
"""
print(mk.sqr(5))
print(mk.sqrt(5))