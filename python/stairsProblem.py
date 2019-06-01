#Number of ways to climb 'n' steps if a person can either go '1 or 2..or..k' steps at a time

#call = 0
#recursive function
def ways(n,k):
    #(int)call += 1
    if n == 0:
        return 1
    elif n<0 :
        return 0
    ans = 0
    for i in range(1, k+1) : #by default it will increase i by 1, if we have other increment value then we need to specify as third variable
        subans = ways(n-i, k)
        ans += subans
    return ans

#main function
a = input("Enter the number of stairs : ")
b = input("Enter the number of maximum stairs to climb at one time : ")
print(ways(a, b))
#print(call)