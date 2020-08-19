# Collect two inputs from the user
# Make a range out of it
# Add numbers under range
# Divide by numbers under range
# Make a 'counter' out of range

# x is first and y is second input
# let z be constant; z = 1
x = int(input("Enter you first value: -> "))
y = int(input("Enter you second value: -> "))
lim = x - y or y - x or x or y
counter = lim+1
ranger = list(range(lim))
index = 0
if x > y and y < x and not x == y:
    lim = x - y
    print("Result: \'" + str(x) + " is greater than " + str(y) + "\'.")
    print("Range = " + str(lim))
    for ceil in ranger:
        print(ceil)
        index += 1
        if index == counter:
            break
    else:
        print("Error")
elif y > x and x < y and not x == y:
    lim = y - x
    print("Result: \'" + str(y) + " is greater than " + str(x) + "\'.")
    print("Range = " + str(lim))
    for ceil in range(lim+1):
        print(ceil)
    else:
        print("Error")
elif x == y and not x > y or x < y:
    lim = x or y and not x - y or y - x
    print(str(x) + " is equal to " + str(y) + ".")
else:
    print("Error")
