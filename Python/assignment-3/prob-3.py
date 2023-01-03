
# WAP to print numbers in a given range. 

min=int(input("Enter minimum  of range: "))
max=int(input("Enter maximum  of range: "))

print("Even numbers are: ")
for i in range (min,max+1):
    if i%2 == 0:
        print(i)