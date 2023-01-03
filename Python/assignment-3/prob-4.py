

# WAP wheather an item is present or not in the List. 

my_List=[1,2,3,4,5]
key=int(input("Enter the item: "))
k=0
for i in my_List:
    if key ==i:
        print("Present")
        k=1
        break
if k == 0:
    print("Not present")    