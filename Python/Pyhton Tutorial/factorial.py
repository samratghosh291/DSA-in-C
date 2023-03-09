

print("Factorial using Iteration:")
def factorial(n):
    ans=1    
    for i in range(1,n+1):
        ans=ans*i
    return ans    

n = (int)(input("Enter the number for Iteration method: "))
print("The factorial of the given number is: ",factorial(n))

print("\n\n")

print("Factorial using Recursion:")

def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        return (n*fact(n-1))

n = (int)(input("Enter the number for Recursion method: "))
print("The factorial of the given number is: ",fact(n))    


