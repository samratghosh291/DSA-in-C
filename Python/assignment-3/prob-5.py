

# WAP to print the numbers from 1 to 10. Remove the even numbers from the List. 

my_List1=[i for i in range(1,11)]
print("Before deletion: ")
print(my_List1)
for i in my_List1:
    if i%2 ==0:
        my_List1.remove(i)
print("After deletion: ") 
print(my_List1)       