#finding factorial
n = input("Enter a number : ")
a = 1
while n>0:
    a = a * n
    n -= 1
print("Factorial : " + str(a))