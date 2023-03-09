
#----------for loops-------------------------------------------------

#syntax: for (iterator variable) in range (lower limit,upper bound, increment/decrement)

#for loop with range-incerment
for i in range(1,10,2):   #for(i=1;i<10;i+=2)
    print(i)   # 1 3 5 7 9 (verticle)

print("\n\n")

#for loop with range-decerment
for i in range(10,1,-2):  #for(i=10;i>1;i-=2)
    print(i)   # 10 8 6 4 2 (verticle)

print("\n\n")

for i in range(1,10):   #for(i=1;i<9;i++)
    print(i)     # 1 3 5 7 9 (verticle)
#by default i++ in range

print("\n\n")

for i in range(10):  #for(innt i=0;i<10;i++)
    print(i)    # 0 1 2 3 4 5 6 7 8 9 (verticle)
#by default lower limit=0

print("\n\n")

for i in range(1,10):
    print(i,end=" ") #1 2 3 4 5 6 7 8 9 (horizontal)
#end="statement" write in same line

#-----------------while loops----------------------------------------

# syntax: while condition:
#                 statement

print("\n\n")

a=1
while a<=5:
    print(a);
    a=a+1  #1 2 3 4 5 (verticle)


print("\n\n")

b=1
while b<=5:
    print(b,end=" ");
    b=b+1  #1 2 3 4 5 (hotizontal)



#----------------break and continue----------------------------------
print("\n\n")
x=1
while x<=10:
    print(x)  # 1 2 3 4
    x=x+1
    if (x==5):
        break

print("\n\n")
c =1;
while(c<=10):
    print(c)
    c=c+1
    if(c==5):
        continue   #1 2 3 4 5 6 7 8 9 10



