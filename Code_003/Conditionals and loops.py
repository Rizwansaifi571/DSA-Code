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




# While loop

# Example : Find sum from 1 to n

n = int(input("Enter the value of n  : "))
i = 1
sum = 0
while (i <= n):
    sum += i
    i += 1
print(f'Sum from 1 to {n} is : {sum}')


# Example : Find sum of all even number from 1 to n1.

n1 = int(input("Enter the value of n1 : "))
i = 1
sum = 0
while (i <= n1):
    if (i % 2 == 0):
        sum += i
    i += 1
print (f'Sum of even number from 1 to {n1} is : {sum}')


# Example : Find z is prime or not?
z = int(input("Enter the value of z : "))
i = 2
output = True 
while (i < z):
    if (z % i == 0):
        output = False
        break
    else :
        output = True
    i += 1

if (output == True):
    print(f'{z} is an prime number')
else : 
    print(f'{z} is not an prime number')
    
