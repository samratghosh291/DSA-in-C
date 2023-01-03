

# WAP to print the multiplication table of a given number. 

# using List 
n=int(input("Enter the number: "))
my_list=[n* i for i in range(1,11)]
print("List of the multiplies of: ",n)
print(my_list)


# using range 

a=int(input("Enter the number: "))
print("TABLE of ",a)
for i in range (1,11):
    print(a,"*",i,"=",a*i)