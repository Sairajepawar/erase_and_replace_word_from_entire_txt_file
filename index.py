from asyncio.windows_events import NULL
from gettext import find
aer=input("Enter the word we need to erase:- ")
ber=input("Enter the word we need to replace with it:- ")
sizeaer = len(aer)
obj = open("input.txt","r")
a=obj.readline()
previous = 0
while(a):
    size = len(a)
    i = a.find(aer,0,size)
    b = a[0:i] + ber
    last = i+sizeaer
    while(i!=-1):
        i = a.find(aer,last,size)
        if(i==-1):
            b = b + a[last:size]
            break
        else:
            b = b + a[last:i] + ber
            last = i+sizeaer
    sub = open("result.txt","a")
    sub.write(b)
    sub.close()
    a=obj.readline()
obj.close()
