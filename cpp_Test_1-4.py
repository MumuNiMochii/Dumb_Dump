# py-integrated guide for C++

er = "\tError. Input a valid number from the list."
oneT = "\t\tTopic 1 - Integers, Operators, and Inline Operators"
twoT = "\t\tTopic 2 - Math Functions"
tpNum = [er, oneT, twoT]

print("\nINTRODUCTION TO C++\n\tWelcome to my program! In this program some fundamentals of C++ will be tackled.")
n_tpNum = []
nL = []
for x in tpNum:
    if x != er:     # So apparently this makes this an 'exception'
        n_tpNum.append(x)
tpNum = n_tpNum

for y in tpNum:     # I added this to remove the 'list-looking' print
    print(y)        # It prints in iteration without the 'exception'

num = int(input("\nInput a number to start a topic: "))

if num == 0 or num < 0:
    print(er)
elif num == 1 or num == 2 and not num <= 0:
    for a in range(list.n_tpNum(num), num):
        if a == oneT:
            print(a)
            break
        elif a == twoT:
            print(a)
            break
    nL = n_tpNum
    for b in nL:
        print(b)
else:
    print(er)
