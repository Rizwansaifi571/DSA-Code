# Conditionals and loops

# Example of using nested if - else.
a = int(input("Enter the value of a :"))
if a > 0 :
    print("a is positive.")
else :
    print("a is negative")


# now add more feature

a1 = int(input("Enter the value of a1 :"))
if (a1>0) :
    print(f'{a1} is an positive number')
else :
    if (a1 == 0):
        print(f'The value of a1 will be {a1}')
    else :
        print (f'{a1} is an negative number')

# now for same qestion we will use else if

a11 = int(input("Enter the value of a11 : "))
if (a11 > 0) :
    print(f'{a11} is greater than zero')
elif (a11 == 0) :
    print(f'The value of a11 will be {a11}')
else :
    print(f'{a} is less than zero')


