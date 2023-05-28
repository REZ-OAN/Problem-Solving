import json
book = {}
book['tom']={
    'name':'tom',
    'address':'1 red street, NY',
    'phone': 29238393
}
book['lonny']={
    'name':'lonny',
    'address':'326B Baker street, NY',
    'phone': 4892943
}
book['Benedict']={
    'name':'Hululu',
    'address':'326B Baker street, LULU',
    'phone': 7989798
}
## this will convert the dictonary into a json string
s = json.dumps(book)
print(s)
with open('Problem-Solving\\Python Basics\\book.txt',"w") as f :
    f.write(s)
f = open("Problem-Solving\\Python Basics\\book.txt","r")
ss = f.read()
## converting json to python dictionary
sk = json.loads(ss)
print(sk)
print(sk['tom']['address'])