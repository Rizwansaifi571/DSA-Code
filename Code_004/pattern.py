# Pattern Problems.

"""Ques 1.
1  2  3  4 
1  2  3  4 
1  2  3  4 
1  2  3  4 
"""

n= int(input("Enter n : "))
i = 1
while (i <= n):
    j = 1
    while (j <= n):
        print(j, end =" ")
        j += 1
    i += 1
    print()


"""Ques 2.
4  3  2  1
4  3  2  1 
4  3  2  1
4  3  2  1 """

n= int(input("Enter n : "))
i = 1
while (i <= n):
    j = 1
    while (j <= n):
        print(n-j+1, end =" ")
        j += 1
    i += 1
    print()


"""Ques 3.
1  2  3
4  5  6  
7  8  9 """

n= int(input("Enter n : "))
i = 1
count = 1
while (i <= n):
    j = 1
    while (j <= n):
        print(count, end =" ")
        j += 1
        count += 1
    i += 1
    print()


"""Ques 4.
9  8  7
6  5  4   
3  2  1
"""

n= int(input("Enter n : "))
i = 1
count = n * n

while (i <= n):
    j = 1
    while (j <= n):
        print(count, end =" ")
        j += 1
        count -= 1
    i += 1
    print()


"""Ques 5.
* 
* *
* * *
* * * *
"""

n= int(input("Enter n : "))
i = 1

while (i <= n):
    j = 1
    while (j <= i):
        print("*", end =" ")
        j += 1
    i += 1
    print()