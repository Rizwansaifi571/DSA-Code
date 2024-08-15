# For Loop 

# Ques. Printing number for 1 to n.

n = int(input("Enter n : "))

for i in range (1, n+1) :
    print (i)



# Ques: Print sum for 1 to n.

n = int(input("Enter n : "))
sum = 0
for i in range (1, n+1):
    sum += i
print(sum)


# Ques: Print fibonacci series.

n = int(input("Enter n : "))
a = 0
b = 1
print (a,b, end = " ")
for i in range(1, n+1):
    sum = a + b
    a = b
    b = sum
    print(sum, end = " ")


# Ques : Print number is prime or not.

n = int(input("Enter n : "))
check = 1
 
for i in range (2, n):
    if (n % i == 0):
        print(n, "is not a prime number")
        check = 0
        break
    else :
        check = 1

if check == 1 :
    print(n, "is a prime number")
        
