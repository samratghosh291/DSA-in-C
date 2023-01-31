# Print multiplication table for the given number using while loop. 

a = int(input("Enter the number: "))
print("TABLE OF",a)
i=1
while(i<11):
    print(a,"*",i,"=",a*i)
    i=i+1