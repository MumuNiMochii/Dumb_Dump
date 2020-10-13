import math

def main():
    print("""
\tComsole by MumuNiMochii version beta 1.6.23
\t\"Originally made with C\"
    
\tMAIN MENU
\tWhat do you want to execute and evaluate?
\t1.) Add two addends
\t2.) Subtract a minuend from its subtrahend
\t3.) Multiply a multiplicand to its multiplier
\t4.) Divide a dividend to its divisor
\t5.) Raise to power a base number
\t6.) Get the square root of a number
\t7.) Compare two numbers
\t8.) Compare three numbers
\t9.) Auto-summation up to inputted value
\t10.) Auto-factorial up to inputted value
\t0.) Exit
""")
    opt = int(input("\t\tEnter the number of your choice: "))
    if opt == 1:
        def add():
            print("\n\tADD VALUES")
            x = float(input("\t1.) Enter a first value: "))
            y = float(input("\t2.) Enter an second value: "))
            print("\t3.) The number " + str(x) + " is added by " + str(y) + ", and is equals to " + str(float(x + y)))
        add()
    elif opt == 2:
        def sub():
            print("\n\tSUBTRACT VALUES")
            x = float(input("\t1.) Enter a first value: "))
            y = float(input("\t2.) Enter an second value: "))
            print("\t3.) The number " + str(x) + " is subtracted by " + str(y) + ", and is equals to " + str(float(x-y)))
        sub()
    elif opt == 3:
        def mul():
            print("\n\tMULTIPLY VALUES")
            x = float(input("\t1.) Enter a first value: "))
            y = float(input("\t2.) Enter an second value: "))
            print("\t3.) The number "+str(x)+" is multiplied by "+str(y)+", and is equals to "+str(float(x*y)))
        mul()
    elif opt == 4:
        def div():
            print("\n\tDIVIDE VALUES")
            x = float(input("\t1.) Enter a first value: "))
            y = float(input("\t2.) Enter an second value: "))
            print("\t3.) The number "+str(x)+" is divided by "+str(y)+", and is equals to "+str(float(x/y)))
        div()
    elif opt == 5:
        def pow():
            print("\n\tPOWERED VALUE")
            x = float(input("\t1.) Enter a base value: "))
            y = int(input("\t2.) Enter an exponent value: "))
            print("\t3.) The number "+str(x)+" is raised to "+str(y)+", and is equals to "+str(math.pow(x, y))+".")
        pow()
    elif opt == 6:
        def sqrt():
            print("\n\tRADICAL VALUE")
            x = float(input("\t1.) Enter a value: "))
            y = math.sqrt(x)
            print("\t2.) The number is "+str(int(x))+" and its square root is: "+str(y)+".")
        sqrt()
    elif opt == 7:
        def comp2():
            print("\n\tCOMPARE TWO VALUES")
            x = int(input("\t1.) Enter a first value: "))
            y = int(input("\t2.) Enter a second value: "))
            msg = "\t3.) Your numbers are "+str(x)+", and "+str(y)+", where "
            if x > y:
                print(msg + str(x) + " is greater than " + str(y)+".")
            else:
                print(msg + str(y) + " is greater than " + str(x)+".")
        comp2()
    elif opt == 8:
        def comp3():
            print("\n\tCOMPARE THREE VALUES")
            x = int(input("\t1.) Enter a first value: "))
            y = int(input("\t2.) Enter a second value: "))
            z = int(input("\t3.) Enter a third value: "))
            msg = "\t4.) Your numbers are "+str(x)+", "+str(y)+", and "+str(z)+", where "
            if x > y and x > z:
                print(msg+str(x)+" is greater than the values "+str(y)+" and "+str(z)+".")
            elif y > x and y > z:
                print(msg+str(y)+" is greater than the values "+str(x)+" and "+str(z)+".")
            else:
                print(msg+str(z)+" is greater than the values "+str(x)+" and "+str(y)+".")
        comp3()
    elif opt == 9:
        def summ():
            print("\n\tSUMMATION UP TO INPUT VALUE")
            x = int(input("\t1.) Count up to inputted number: "))
            a = list(range(0, x))
            a.append(x)
            print("\t2.) Summation of numbers: " + str(a))

            b = []
            b.extend(a)
            total = 0
            for i in b:
                total += i
            print("\t3.) Sum: " + str(total))
        summ()
    elif opt == 10:
        def fact():
            print("\n\tFACTORIAL INPUT VALUE")
            x = int(input("\t1.) Factorial the inputted number: "))
            a = list(range(1, x))
            a.append(x)
            print("\t2.) List of factorials: "+str(a))

            b = []
            b.extend(a)
            total = 1
            for i in b:
                total *= i
            print("\t3.) Product: "+str(total))
        fact()
    else:
        print("Invalid input.")
main()
