#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string top1 = "\n\n\nTOPIC 1: DATA TYPES, OPERATORS, & INLINE OPERATORS";
    string top1_1 = "\n  - These are the previous samples:";
    string top2 = "\n\nTOPIC 2: IMPORTS, CMATH FUNCTION, ETC";
    string top2_1 = "\n  - This next topic includes importing and using new functions.";
    string pOutput = "\n    Output: ";
    string pMsg1 = "\n\n 1. Using 'pow()' to put 'power' to a number:";
    string pMsg1_1 = "\n       pow(3, 3);";
    string pMsg2 = "\n\n 2. Now I'll assign data types/variables:";
    string pMsg2_1 = "\n\n  2.1 Then, put them in pow() and assign a power:";
    string pMsg2_2 = "\n\n  2.2 A float data type with power:";
    string pMsg2_3 = "\n\n  2.3 A double data type with power:";
    string pMsg3 = "\n\n 3. Trying out on float:";
    string pMsg3_1 = "\n       pow(7.2, 3);";
    string pMsg4 = "\n\n 4. Applying it on double:";
    string pMsg4_1 = "\n       pow(1.36, 5);";
    string pMsg5 = "\n\n 5. Using 'sqrt()' to take a square root:";
    string pMsg5_1 = "\n       sqrt(100);";
    string pMsg5_2 = "\n    It is also applicable to float and double.";
    string pMsg6 = "\n\n 6. Using 'round()' to round off numbers:";
    string pMsg6_1 = "\n\n  6.1 Rounding up:";
    string pMsg6_1_1 = "\n        round(5.7);";
    string pMsg6_2 = "\n\n  6.2 Rounding down:";
    string pMsg6_2_1 = "\n        round(8.1);";
    string pMsg7 = "\n\n 7. Using 'ceil()' to round up numbers regardless of decimal value:";
    string pMsg7_1 = "\n       ceil(2.4);";
    string pMsg8 = "\n\n 8. Using 'floor()' to round down numbers regardless of decimal value:";
    string pMsg8_1 = "\n       floor(5.7);";
    string pMsg9 = "\n\n 9. Using 'fmax()' to show which number is biggest:";
    string pMsg9_1 = "\n       fmax(24, 6);";
    string pMsg10 = "\n\n 9. Using 'fmin()' to show which number is smallest:";
    string pMsg10_1 = "\n       fmin(5, 1);";
    //Data with power
    cout << top2;
    cout << top2_1;
    cout << pMsg1;
    cout << pMsg1_1;
    cout << pOutput << pow(3, 3);

    int sev = 7;
    float thSev = 3.7;
    double onThSix = 1.36;

    cout << pMsg2;
    cout << "\n       int sev = 7;";
    cout << "\n       float thSev = 3.7;";
    cout << "\n       double onThSix = 1.36;";

    cout << pMsg2_1;
    cout << "\n         pow(sev, 2);";
    cout << "\n      Output: " << pow(sev, 2);

    cout << pMsg2_2;
    cout << "\n         pow(thSev, 4);";
    cout << "\n      Output: " << pow(thSev, 4);

    cout << pMsg2_3;
    cout << "\n         pow(onThSix, 5);";
    cout << "\n      Output: " << pow(onThSix, 5);

    cout << pMsg3;
    cout << pMsg3_1;
    cout << pOutput << pow(7.2, 3);

    cout << pMsg4;
    cout << pMsg4_1;
    cout << pOutput << pow(2.08723, 6);

    //Square root the data
    cout << pMsg5;
    cout << pMsg5_1;
    cout << pOutput << sqrt(100);
    cout << pMsg5_2;

    //Rounding off numbers
    cout << pMsg6;
    cout << pMsg6_1;
    cout << pMsg6_1_1;
    cout << "\n      Output: " << round(5.7);
    cout << pMsg6_2;
    cout << pMsg6_2_1;
    cout << "\n      Output: " << round(8.1);
    cout << pMsg5_2;

    //Auto round up - ceil() & floor()
    //Regardless of decimal digit, it will only round up
    cout << pMsg7;
    cout << pMsg7_1;
    cout << pOutput << ceil(2.4);
    //Regardless of decimal digit, it will only round down
    cout << pMsg8;
    cout << pMsg8_1;
    cout << pOutput << floor(5.7);

    //Shows which number is largest
    cout << pMsg9;
    cout << pMsg9_1;
    cout << pOutput << fmax(24, 6);

    //Shows which number is largest
    cout << pMsg10;
    cout << pMsg10_1;
    cout << pOutput << fmin(5, 1);

    cout << top1;
    cout << top1_1;
    //NUMBERS!
    int first = 14323;
    float coke = 12.34; //This includes two decimals
    double chocochip = 3.2423423; //So apparently, it only includes 5 decimal digits
    string msg0 = "\n\nA. JUST AN INTRO";
    string msg0_1 = "\nJust follow the format: ('input code' = 'output')";
    string msg1 = "\n\n 1. We're gonna 'cout' the '12 + 12' expression:\n";
    string msg1_1 = "      cout << 12 + 12 = ";
    string msg2 = "\n\n 2. How about putting a negative number with decimal numbers in it:\n";
    string msg2_1 = "      cout << -43.543235 = ";
    string msg3 = "\n\n\nB. PUTTING VARIABLES";
    string msg4 = "\nWe have inputted at least 3 different data types:";
    string msg4_0 = "\nWe'll ignore strings lol.";
    string msg4_1 = "\n\n 1. int first = ";
    string msg4_2 = "\n 2. float first = ";
    string msg4_3 = "\n 3. double first = ";
    string msg5 = "\n\n\nC. BACK ON OPERATIONS";
    string msg5_1 = "\n\n 1. cout << 5 + 12; = ";
    string msg5_2 = "\n 2. cout << 12 - 4; = ";
    string msg5_3 = "\n 3. cout << 12 - 23; = ";
    string msg5_4 = "\n 4. cout << 324 * 2; = ";
    string msg5_5 = "\n 5. cout << 2 * -5; = ";
    string msg5_6 = "\n 6. cout << 134 / 2; = ";
    string msg5_7 = "\n 7. cout << 54 / -3; = ";

    cout << msg0;
    cout << msg0_1;
    cout << msg1;
    cout << msg1_1 << 12 + 12;
    cout << msg2;
    cout << msg2_1 << -43.543235; //For some reason it shows more decimal digits than it should be
    //Clearly we can see here that the numbers can be operated and 'cout-ed' automatically
    //Now to define some variables with varying data types:
    cout << msg3;
    cout << msg4;
    cout << msg4_0;
    cout << msg4_1 << first;
    cout << msg4_2 << coke;
    cout << msg4_3 << chocochip;
    //Back on operations:
    cout << msg5;
    cout << msg5_1 << 5 + 12;
    cout << msg5_2 << 12 - 4;
    cout << msg5_3 << 12 - 23;
    cout << msg5_4 << 324 * 2;
    cout << msg5_5 << 2 * -5; //Ah yes, it can solve negative real numbers
    cout << msg5_6 << 134 / 2;
    cout << msg5_7 << 54 / -3;
    cout << "\n\n Now, to show a remainder we'll use a 'modulus':";
    cout << "\n 8. cout << 10 % 3; = " << 10 % 3;
    //Following PEMDAS/BODMAS:
    cout << "\n\n\nD. CPP FOLLOWS 'PEMDAS/BODMAS'";
    cout << "\nThis operation will turn into 35:";
    cout << "\n\n 1. cout << 5 + 6 * 5; = " << 5 + 6 * 5;
    cout << "\n --as the following example above evaluated '5 * 6' first,";
    cout << "\n before adding the remaining '5'.";
    //Incrementing and decrementing:
    cout << "\n\n\nE. INCREMENT/DECREMENT THE DATA";
    int five1 = 5;
    float num1 = 6.21;
    double num1_1 = 182.93234;
    five1++;
    num1++;
    num1_1++;
    cout << "\n\n 1. INCREMENT";
    cout << "\n 1.1 int example:";
    cout << "\n        int five1 = 5;";
    cout << "\n        five1++;";
    cout << "\n     Output: " << five1;
    cout << "\n\n 1.2 float example";
    cout << "\n        float num1 = 6.21;";
    cout << "\n        num1++;";
    cout << "\n     Output: " << num1;
    cout << "\n\n 1.3 double example:";
    cout << "\n        double num1_1 = 182.93234;";
    cout << "\n        num1_1++;";
    cout << "\n     Output: " << num1_1;
    int five2 = 5;
    float num2 = 56.13;
    double num2_1 = 24.34214;
    five2--;
    num2--;
    num2_1--;
    cout << "\n\n\n 2. DECREMENT";
    cout << "\n 1.1 int example:";
    cout << "\n        int five2 = 5;";
    cout << "\n        five2--;";
    cout << "\n     Output: " << five2;
    cout << "\n\n 1.2 float example:";
    cout << "\n        float num2 = 56.13;";
    cout << "\n        num2--;";
    cout << "\n     Output: " << num2;
    cout << "\n\n 1.3 double example:";
    cout << "\n        double num2_1 = 24.34214;";
    cout << "\n        num2_1--;";
    cout << "\n     Output: " << num2_1;

    cout << "\n\n\nF. INLINE OPERATOR";
    int in1 = 12;
    float in2 = 47.81;
    double in3 = 16.31208;
    in1 += 84;
    in2 -= 11.5;
    in3 *= 3;
    cout << "\n\n 1. int and inline add example:";
    cout << "\n        int in1 = 12;";
    cout << "\n        in1 += 84;";
    cout << "\n    Output: " << in1;
    cout << "\n\n 2. float and inline subtract example:";
    cout << "\n        float in2 = 47.81;";
    cout << "\n        in2 -= 11.5;";
    cout << "\n    Output: " << in2;
    cout << "\n\n 3. double and inline multiply example:";
    cout << "\n        double in3 = 16.31208;";
    cout << "\n        in3 *= 3;";
    cout << "\n    Output: " << in3;
    //For some reason I can't apply modulus as an inline operator
    cout << endl << endl;
    return 0;
}
