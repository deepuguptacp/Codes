#learning loops
#n = input("Enter the length of the array  : ")
a = [1, 2, 3, 4, 5, 6, 7, 8]
print("Prefixes of", a)
for i in range(0, len(a) + 1):
    print(a[0:i])
print("----------------------------------")
print("Suffixes of" , a)
for i in range(0, len(a) + 1):
    print(a[i:len(a)+1])