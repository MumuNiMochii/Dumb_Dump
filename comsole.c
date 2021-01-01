#include <stdio.h>
#include <stdlib.h>

int main()
{
    //user float input
    float num = 0;
    //user choice input
    int opt = 0;
    //another number
    float anm = 0;
    //answer
    float ans = 0;

    printf("Comsole: Computer Console for Mathematics by MumuNiMochii v.0.26.beta");
    printf("\n\n\tMAIN MENU\n\tWhat do you want to execute and evaluate?\n\t1.) Add two addends\n\t2.) Subtract a minuend from its subtrahend\n\t3.) Multiply a multiplicand to its multiplier\n\t4.) Divide a dividend to its divisor\n\t5.) Raise to power a base number\n\t6.) Get the square root of a number\n\t7.) Compare two numbers\n\t8.) Compare three numbers\n\n\t0.) Exit");
    printf("\n\n\tChoose the number of your option: ");
    scanf("%d", &opt);

    if (opt == 1) {
        //make options for the user: to use it again or get redirected back to home [main()]
        int addBox() {
            printf("\n\n\tCOMPUTING A NUMBER INCREASED WITH ANOTHER ADDEND");
            printf("\n\tEnter your first addend: ");
            scanf("%f", &num);
            printf("\tEnter your second addend: ");
            scanf("%f", &anm);
            ans = num + anm;

            printf("\n\t\tYour inputs are %f for the base number, and %f as the another addend:", num, anm);
            printf("\n\t\t%f + %f = ", num, anm);

            printf("%f\n", ans);

            int addOpt = 0;
            printf("\n\n\tWould you like to add again?\n\t1.) Yes\n\t2.) No");
            printf("\n\tChoose the number of your option: ");
            scanf("%d", &addOpt);

                if (addOpt == 1){
                    printf("\n\n\tYou have been redirected to \'COMPUTING A NUMBER INCREASED WITH ANOTHER ADDEND\'.");
                    return addBox();
                }
                else {
                    printf("\n\n");
                    return main();
                }
        }
        return addBox();
    }
    else if (opt == 2) {
        int subBox(){
            printf("\n\n\tCOMPUTING A MINUEND DECREASED WITH ITS SUBTRAHEND");
            printf("\n\tEnter your minuend: ");
            scanf("%f", &num);
            printf("\tEnter your subtrahend: ");
            scanf("%f", &anm);
            ans = num - anm;

            printf("\n\t\tYour inputs are %f for the minuend, and %f as the subtrahend:", num, anm);
            printf("\n\t\t%f - %f = ", num, anm);

            printf("%f\n", ans);

            int subOpt = 0;
            printf("\n\n\tWould you like to subtract again?\n\t1.) Yes\n\t2.) No");
            printf("\n\tChoose the number of your option: ");
            scanf("%d", &subOpt);

                if (subOpt == 1){
                    printf("\n\n\tYou have been redirected to \'COMPUTING A MINUEND DECREASED WITH ITS SUBTRAHEND\'.");
                    return subBox();
                }
                else {
                    printf("\n\n");
                    return main();
                }
        }
        return subBox();
    }
    else if (opt == 3) {
        int mulBox(){
            printf("\n\n\tCOMPUTING A MULTIPLICAND TIMES ITS MULTIPLIER");
            printf("\n\tEnter your multiplicand: ");
            scanf("%f", &num);
            printf("\tEnter your multiplier: ");
            scanf("%f", &anm);
            ans = num * anm;

            printf("\n\t\tYour inputs are %f for the multiplicand, and %f as the multiplier:", num, anm);
            printf("\n\t\t%f * %f = ", num, anm);

            printf("%f\n", ans);

            int mulOpt = 0;
            printf("\n\n\tWould you like to multiply again?\n\t1.) Yes\n\t2.) No");
            printf("\n\tChoose the number of your option: ");
            scanf("%d", &mulOpt);

                if (mulOpt == 1){
                    printf("\n\n\tYou have been redirected to \'COMPUTING A MULTIPLICAND TIMES ITS MULTIPLIER\'.");
                    return mulBox();
                }
                else {
                    printf("\n\n");
                    return main();
                }
        }
        return mulBox();
    }
    else if (opt == 4) {
        int divBox(){
            printf("\n\n\tCOMPUTING A DIVIDEND TO ITS DIVISOR");
            printf("\n\tEnter your dividend: ");
            scanf("%f", &num);
            printf("\tEnter your divisor: ");
            scanf("%f", &anm);
            ans = num / anm;

            printf("\n\t\tYour inputs are %f for the dividend, and %f as the divisor:", num, anm);
            printf("\n\t\t%f / %f = ", num, anm);

            printf("%f\n", ans);

            int divOpt = 0;
            printf("\n\n\tWould you like to divide again?\n\t1.) Yes\n\t2.) No");
            printf("\n\tChoose the number of your option: ");
            scanf("%d", &divOpt);

                if (divOpt == 1){
                    printf("\n\n\tYou have been redirected to \'COMPUTING A DIVIDEND TO ITS DIVISOR\'.");
                    return divBox();
                }
                else {
                    printf("\n\n");
                    return main();
                }
        }
        return divBox();
    }
    else if (opt == 5) {
        int expBox(){
            printf("\n\n\tCOMPUTING A BASE NUMBER RAISED TO POWER");
            printf("\n\tEnter your base number: ");
            scanf("%f", &num);
            printf("\tEnter your exponent: ");
            scanf("%f", &anm);
            ans = pow(num, anm);

            printf("\n\t\tYour inputs are %f as the base number, and %f for the exponent:", num, anm);
            printf("\n\t\t%f ^ %f = ", num, anm);

            printf("%f\n", ans);

            int expOpt = 0;
            printf("\n\n\tWould you like to raise a base number again?\n\t1.) Yes\n\t2.) No");
            printf("\n\tChoose the number of your option: ");
            scanf("%d", &expOpt);

                if (expOpt == 1){
                    printf("\n\n\tYou have been redirected to \'COMPUTING A DIVIDEND TO ITS DIVISOR\'.");
                    return expBox();
                }
                else {
                    printf("\n\n");
                    return main();
                }
        }
        return expBox();
    }
    else if (opt == 6) {
        int sqrtBox(){
            printf("\n\n\tCOMPUTING A RADICAL OF A BASE NUMBER");
            printf("\n\tEnter your base number: ");
            scanf("%f", &num);
            ans = sqrt(num);

            printf("\n\t\tYour input is %f as the base number:", num);
            printf("\n\t\tradical(%f) = ", num);

            printf("%f\n", ans);

            int sqrtOpt = 0;
            printf("\n\n\tWould you like to radical a base number again?\n\t1.) Yes\n\t2.) No");
            printf("\n\tChoose the number of your option: ");
            scanf("%d", &sqrtOpt);

                if (sqrtOpt == 1){
                    printf("\n\n\tYou have been redirected to \'COMPUTING A RADICAL OF A BASE NUMBER\'.");
                    return sqrtBox();
                }
                else {
                    printf("\n\n");
                    return main();
                }
        }
        return sqrtBox();
    }
    else if (opt == 7) {
        int comp2() {
            printf("\n\n\tCOMPARING TWO VALUES");
            printf("\n\tEnter your first number: ");
            scanf("%f", &num);
            printf("\tEnter your second number: ");
            scanf("%f", &anm);

            printf("\n\t\tYour inputted values are %f and %f, where:", num, anm);
            char msg1[] = "\n\t\t%f is greater than %f.";

            if (num > anm) {
                printf(msg1, num, anm);

                int comp2Opt = 0;
                printf("\n\n\tWould you like to compare two values again?\n\t1.) Yes\n\t2.) No");
                printf("\n\tChoose the number of your option: ");
                scanf("%d", &comp2Opt);

                    if (comp2Opt == 1){
                        printf("\n\n\tYou have been redirected to \'COMPARING TWO NUMBERS\'.");
                        return comp2();
                    }
                    else {
                        printf("\n\n");
                        return main();
                    }
            }
            else {
                printf(msg1, anm, num);

                int comp2Opt = 0;
                printf("\n\n\tWould you like to compare two values again?\n\t1.) Yes\n\t2.) No");
                printf("\n\tChoose the number of your option: ");
                scanf("%d", &comp2Opt);

                    if (comp2Opt == 1){
                        printf("\n\n\tYou have been redirected to \'COMPARING TWO NUMBERS\'.");
                        return comp2();
                    }
                    else {
                        printf("\n\n");
                        return main();
                    }
            }
        }
        return comp2();
    }
    else if (opt == 8) {
        int comp3() {
            float num3;
            printf("\n\n\tCOMPARING THREE VALUES");
            printf("\n\tEnter your first number: ");
            scanf("%f", &num);
            printf("\tEnter your second number: ");
            scanf("%f", &anm);
            printf("\tEnter your third number: ");
            scanf("%f", &num3);

            printf("\n\t\tYour inputted values are %f, %f, and %f, where:", num, anm, num3);
            char msg2[] = "\n\t\t%f is greater than %f and %f.";

            if ((num > anm)&&(num > num3)) {
                printf(msg2, num, anm, num3);

                int comp3Opt = 0;
                printf("\n\n\tWould you like to compare two values again?\n\t1.) Yes\n\t2.) No");
                printf("\n\tChoose the number of your option: ");
                scanf("%d", &comp3Opt);

                    if (comp3Opt == 1){
                        printf("\n\n\tYou have been redirected to \'COMPARING THREE NUMBERS\'.");
                        return comp3();
                    }
                    else {
                        printf("\n\n");
                        return main();
                    }
            }
            else if ((anm > num)&&(anm > num3)) {
                printf(msg2, anm, num, num3);

                int comp3Opt = 0;
                printf("\n\n\tWould you like to compare two values again?\n\t1.) Yes\n\t2.) No");
                printf("\n\tChoose the number of your option: ");
                scanf("%d", &comp3Opt);
                    if (comp3Opt == 1){
                        printf("\n\n\tYou have been redirected to \'COMPARING THREE NUMBERS\'.");
                        return comp3();
                    }
                    else {
                        printf("\n\n");
                        return main();
                    }
            }
            else {
                printf(msg2, num3, num, anm);

                int comp3Opt = 0;
                printf("\n\n\tWould you like to compare two values again?\n\t1.) Yes\n\t2.) No");
                printf("\n\tChoose the number of your option: ");
                scanf("%d", &comp3Opt);

                    if (comp3Opt == 1){
                        printf("\n\n\tYou have been redirected to \'COMPARING THREE NUMBERS\'.");
                        return comp3();
                    }
                    else {
                        printf("\n\n");
                        return main();
                    }
            }
        }
        return comp3();
    }
    else if (opt == 0) {
        return 0;
    }
    else {
        printf("\n\tError: Wrong input.\n\n");
        printf("\n\tYou have been redirected to \'MAIN MENU\'.\n\n");
        return main();
    }

    return 0;
}
