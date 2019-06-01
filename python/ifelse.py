#learning conditions
print("Is your Computer is working properly ?")
choice = input("(y/n) : ")
if choice == 'n':
    print("Follow the given instructions")
    coice = input("Does your computer make any light? (y/n) :")
    if choice == 'n' :
        choice = input("Is it plugged in? (y/n) :")
        if choice =='n':
            print("Plug it on!!")
        else:
            choice = input("Is the switch in the \"on\" position? (y/n):") 
            if choice == 'n':
                print("Turn it on.")
            else: 
                choice = input("Does the computer have a fuse? (y/n):") 
                if choice == 'n':
                    choice = input("Is the outlet OK? (y/n):") 
                    if choice == 'n':
                        print("Check the outlet's circuit ")
                        print("breaker or fuse.  Move to a")
                        print("new outlet, if necessary. ")
                    else:
                        print("Please consult a service technician.") 
                else:
                    print("Check the fuse. Replace if ") 
                    print("necessary.")
    else:
        print("Please consult a service technician.") 
else:
    print("You are all setup!!")