
# calculate the sum of numbers(10 numbers max.).
# If the user entrs a negative numbers the loop terminates.

print("Enter the 10 numbers: ")
sum=0
i=0
while (i<11):
    num=int(input("Enter numbers: "))
    sum=sum+num
    if num<0:
        print("Negative numbers!! Loop Terminated!!")
        break
    print("Sum=",sum)
    i=i+1