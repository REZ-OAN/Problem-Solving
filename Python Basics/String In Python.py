
## String in python
"""
  "" ->er moddhe ja thakbe shob string
  ''->er moddhe ja thakbe shob string
  ''' '''-> er moddhe ja thakbe shob string

"""
print(" Here's a formula is given in '-' form of life ")
print(' Here\'s a formula is given in "_" form of life')
print('''here's a function
that 'is'
the 
fucckin 
booogeeey "man" huh ''')

##accessing index in string 
## 0 to len-1 start->end
## -1 to -len end->start
s="A Deadly Dog running over the lazy fox"
print(s[-3])
print(s[3])
print(s[-10])
print(s[6])
for i in s :
     print(i,end=" ")
## by default print() is works as a newline
print()
## print in reverse order without loop
print(s[::-1])
## 2nd method to store the reverse string
s="".join(reversed(s))
print(s)

## printing the substring 
## s[a:b] a to b (exclusive)
s="REZOANAHMEDABIR"
print(s[6:11])
print(s[6:-4])
print(s[0:6])
## [a:]  a theke last porjonto shob
print(s[-4:])
## [:a] 0 theke a porjonto shob
print(s[:6])
## also you can store the substring
s1=s[-4:]
s2=s[6:-4]
s3=s[:6]
print(s3+" "+s2+" "+s1)

## string formatting
## "{}sep{}sep{}"
s="{} {} {}".format("Lorin","Tasnim","Zeba")
print(s)
s="{2} {1} {0}".format("Rezoan","Ahmed","Abir")
print(s)

## you can give keywords
s="{a} {h} {r}".format(a='abir',h='ahmed',r='rezoan')
print(s)

## formatting intgers
## binary
s="{0:b}".format(5)
print(s)
s="{0:e}".format(117.5789)
print(s)
s="{0:.4f}".format(2/3)
print(s)
## octal
s="{0:o}".format(8)
print(s)
## hexa-decimal
s="{0:x}".format(15)
print(s)

## alignment
## left alignment <
## right alignment >
## centre alignment ^
s="|{:<10}|{:^10}|{:>10}".format("Rezoan","Ahmed","Abir")
print(s)
import string
s="REzoan Ahmed"
print(s.endswith("Ahmed"))
s="web.telegram.com"
print(s.startswith("web."))
## finding the length
print(len(s))
## finding the first occurrence of a substring
print(s.find("ele"))
s="abaabaaabcadbaabaaab"
print(s.rfind("aab"))
## splits the lines under a string
s="cat\nBat\nSat\nMat\nEat"
ss=s.splitlines(False)
print(ss)
## how many occurrence of a substring 
s="aaabaaabbbaabaaabbvvabaaab"
a=s.count("aab")
print(a)
## split string into corresponding words
s="Geeks For Geeks"
w=s.split(' ')
print(w)
s="RezoantAhmedtAbir"
w=s.split('t')
print(w)
s="Cat,Bat,Rat-Orange,Jack Fruit,Apple-Ferrari,Lamborghini,Rolls Royce"
w=s.split('-',3)
print(w) 
s="Cat,Rat,Dog,Tiger,Lion,Monkey"
w=s.split(',',2)
print(w)
## separator_string.join(list_of_string_or string)
dict={'Rezoan':1 ,'Ahmed':2,'Abir':3}
s="_".join(dict)
print(s)
list=['11','20','1999']
s='-'.join(list)
print(s)
## add leading zeros to string
s="654393"
s=s.zfill(10)
print(s)
## add trailing zeros
s="654393"
s=s[::-1]
s=s.zfill(10)
s=s[::-1]
print(s)
