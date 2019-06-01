#power of a number
def power(n, k) :
    if k == 0 :
        return 1
    else :
        return n * power(n, k-1)


n = input("Enter the base : ")
k = input("Enter the power : ")
#print("n^k= flag")
print(str(n) + "^" + str(k))
print(power(n, k))