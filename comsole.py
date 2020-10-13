def main():

    print("\n\t\tComsole by MumuNiMochii version beta 0.23.4\n\n\tMAIN MENU\n\t1.) Summation up to the inputted number\n\t0.) Return to Main Menu")
    opt = int(input("\n\tWhat do you want to do? "))
    if opt == 1:
        def autosum():
            print("\n\tSUMMATION UP TO INPUT VALUE")
            x = int(input("\t1.) Count up to inputted number: "))
            a = list(range(0, x))
            a.append(x)
            print("\t2.) Summation of numbers: "+str(a))

            b = []
            b.extend(a)
            total = 0
            for i in b:
                total += i
            print("\t3.) Sum: "+str(total))

            asumOpt = 0
            print("\n\tDo you want to do summation again?\n\t1.) Yes\n\t2.) No")
            int(input("\n\tEnter the number of your choice: "))

            if asumOpt == 1:
                return autosum()
                print("\n\tYou are redirected to \'SUMMATION UP TO INPUT VALUE\'")
            elif asumOpt == 2:
                return main()
                print("\n\tYou are redirected to \'MAIN MENU\'")
            else:
                print("Error: Invalid input.")
        return autosum()
    else:
        return main()
main()
