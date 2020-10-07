#include <stdio.h>
#include <stdlib.h>

int main()
{
    //This program scans if the input integer is negative or not
    int num;

    printf("Integer Scanner\n\nEnter an integer: ");
    //This is equivalent to C++'s 'cin' and Python's 'input':
    scanf("%d", &num);

    if (num < 0){
        printf("\nYour input %d is a negative integer.\n", num);
    }
    else if (num > 0){
        printf("\nYour input %d is a positive integer.\n", num);
    }
    else if (num == 0){
        printf("\nYour input %d is neither positive nor negative.\n", num);
    }
    else {
        printf("\nError: Invalid input.\n");
    }
    return 0;

}
