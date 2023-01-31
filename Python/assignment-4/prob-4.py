# Calculated the sum of numbers(10 numbers max.).If the user enters a negative,it's not added the result

print("Enter the 10 numbers: ")
sum=0
i=1
while(i<11):
    num=int(input("Enter the number: "))
    sum=sum+num
    print("sum=",sum)
    if(num<0):
        print("It's negative number!!It will not be added!!")
        print("sum=",sum)
    i=i+1    