#function is a block of statement which helps up to reduces redundancy,
# reduces size of programe and consume less memeory

# syntax:
# def fun():
#     statement

print("This is Introduction")
def intro():
    print("HI this is piku")
    print("Using python")

def addition(a,b):
    print("ADDITION")
    # a=(int)(input("Enter the first number: "))
    # b=(int)(input("Enter the second number: "))
    print("The addition will be: ",(a+b))


def substruction(a,b):
    print("SUBSTUCTION")
    # a=(int)(input("Enter the first number: "))
    # b=(int)(input("Enter the second number: "))
    print("The substruction will be: ",(a-b))


def multiplication(a,b):
    print("MULTIPLICATION")
    # a=(int)(input("Enter the first number: "))
    # b=(int)(input("Enter the second number: "))
    print("The multiplication will be: ",(a*b))


def devidation(a,b):
    print("DEVIDATION")
    # a=(int)(input("Enter the first number: "))
    # b=(int)(input("Enter the second number: "))
    print("The devidation will be: ",(a/b))

def modulo(a,b):
    print("MODULUS")
    # a=(int)(input("Enter the first number: "))
    # b=(int)(input("Enter the second number: "))
    print("The  modulus will be: ",(a%b))


intro()
print("\n")
a=(int)(input("Enter the first number: "))
b=(int)(input("Enter the second number: "))
addition(a,b)
print("\n")
substruction(a,b)
print("\n")
multiplication(a,b)
print("\n")
devidation(a,b)
print("\n")
modulo(a,b)

