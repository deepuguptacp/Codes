#First Function in Python
def swap(x, y):
    temp = x
    x = y
    y = temp
    print("I am working")

#main Function/Driver Code
a = input("1st Number : ")
b = input("2nd Number : ")
swap (a, b)
print("a = " + str(a) + "\nb = " + str(b))
temp = a
a = b
b = temp
print("\n\na = " + str(a) + "\nb = " + str(b))