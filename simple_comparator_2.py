print("\nSimple Comparator 2")
# version alpha 2.1.3
print("This is a comparator which compares the two inputted numbers.")
print("this comparator only accepts real whole numbers (meaning they can be positive or negative).")
print("For the fist one you may try: https://github.com/MumuNiMochii/Dumb_Dump/blob/master/simple_comparator.py\n")
# first input
x = int(input("Enter your first value: -> "))
# second input
y = int(input("Enter your second value: -> "))
print("\nLet's compare the inputted numbers "+str(x)+" and "+str(y)+".")
if (x == y and not x != y):
    print("The two inputted values are equivalent.")
elif (x >= y and not x <= y):
    print(str(x)+" is greater than "+str(y)+", and "+str(y)+" is less than "+str(x)+".")
elif (x <= y and not x >= y):
    print(str(x)+" is less than "+str(y)+", and "+str(y)+" is greater than "+str(x)+".")
else:
    print("Error. You may have inputted wrong format of number.")
