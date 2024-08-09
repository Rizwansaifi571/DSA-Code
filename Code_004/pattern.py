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


"""Ques 6.
1 
2 2
3 3 3
4 4 4 4
"""
n= int(input("Enter n : "))
i = 1

while (i <= n):
    j = 1
    while (j <= i):
        print(i, end =" ")
        j += 1
    i += 1
    print()

"""Ques 7.
1 
2 3
4 5 6
7 8 9 10
"""

n= int(input("Enter n : "))
i = 1
count = 1

while (i <= n):
    j = 1
    while (j <= i):
        print(count, end =" ")
        j += 1
        count += 1
    i += 1
    print()


"""Ques 8.
1 
2 3
3 4 5
4 5 6 7
"""

n= int(input("Enter n : "))
i = 1

while (i <= n):
    j = 1
    while (j <= i):
        print(i+j-1, end =" ")
        j += 1
    i += 1
    print()


"""Ques 9.
1 
2 1
3 2 1
4 3 2 1
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= i):
        print(i-j+1, end = " ")
        j += 1
    i += 1
    print()



"""Ques 10.
A A A
B B B
C C C
"""
n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= n):
        print(chr(i+65-1), end = " ")
        j += 1
    i += 1
    print()


"""Ques 11.
A B C 
A B C
A B C
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= n):
        print(chr(j+65-1), end = " ")
        j += 1
    i += 1
    print()



"""Ques 12.
A B C 
D E F
G H I
"""

n = int(input("Enter n : "))
i = 1
count = 65

while(i <= n):
    j = 1
    while(j <= n):
        print(chr(count), end = " ")
        count += 1
        j += 1
    i += 1
    print()


"""Ques 13.
A B C 
B C D
C D E
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= n):
        print(chr(i+j+65-2), end = " ")
        j += 1
    i += 1
    print()


"""Ques 14.
A
B B
C C C
"""
n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= i):
        print(chr(i+65-1), end = " ")
        j += 1
    i += 1
    print()


"""Ques 15.
A
B C
D  E  F
G  H  I  J
"""

n = int(input("Enter n : "))
i = 1
count = 65

while(i <= n):
    j = 1
    while(j <= i):
        print(chr(count), end = " ")
        count += 1
        j += 1
    i += 1
    print()



"""Ques 16.
A 
B C
C D E
D E F G
"""
n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= i):
        print(chr(i+65+j-2), end = " ")
        j += 1
    i += 1
    print()


"""Ques 17.
D 
C D
B C D
A B C D
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= i):
        print(chr(n+65-i+j-1), end = " ")
        j += 1
    i += 1
    print()

"""Ques 18.
      *
    * *
  * * *
* * * *
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    space = 1
    while(space <= n-i):
        print(" ", end = "")
        space += 1
    j = 1
    while(j <= i):
        print("*", end = "")
        j += 1
    i += 1
    print()


"""Ques 19.
* * * * 
* * *
* *
*
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while(j <= n-i+1):
        print("*", end = " ")
        j += 1
    i += 1
    print()


"""Ques 20.
* * * * 
  * * *
    * *
      *
"""
n = int(input("Enter n : "))
i = 1

while(i <= n):
    space = 1
    while(space <= i-1):
        print(" ", end = "")
        space += 1
    j = 1
    while(j <= n-i+1):
        print("*", end = "")
        j += 1
    i += 1
    print()


"""Ques 21.
1111
 222
  33
   4
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    space = 1
    while(space <= i-1):
        print(" ", end = "")
        space += 1
    j = 1
    while(j <= n-i+1):
        print(i, end = "")
        j += 1
    i += 1
    print()


"""Ques 21.
   1
  22
 333
4444
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    space = 1
    while(space <= n-i):
        print(" ", end = "")
        space += 1
    j = 1
    while(j <= i):
        print(i, end = "")
        j += 1
    i += 1
    print()


"""Ques 23.      
      1 
    2 3 
  4 5 6 
7 8 9 10
"""

n = int(input("Enter n : "))
i = 1
count = 1

while(i <= n):
    space = 1
    while(space <= n-i):
        print(" ", end = " ")
        space += 1
    j = 1
    while(j <= i):
        print(count, end = " ")
        count += 1
        j += 1
    i += 1
    print()


"""Ques 24.
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    space = 1
    while(space <= n-i):
        print(" ", end = " ")
        space += 1 
    j = 1
    while (j <= i):
        print(j, end =" ")
        j += 1
    j = 1
    while (j <= i-1):
        print(i-j, end =" ")
        j += 1
    i += 1
    print()


"""Ques 25.
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
"""

n = int(input("Enter n : "))
i = 1

while(i <= n):
    j = 1
    while (j <= n-i+1):
        print(j, end =" ")
        j += 1
    j = 1
    while (j <= (i-1)*2):
        print("*", end =" ")
        j += 1
    j = n-i+1
    while (j >= 1):
        print(j, end =" ")
        j -= 1
    i += 1
    print()