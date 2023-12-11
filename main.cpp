#include<stdio.h>

// void op();
// void UnaryBinary();
// void ArthmeticOp();
// void ifStatment();
// int ifElse();
// void bitwise();

int main(void){
    
    // op();
    // UnaryBinary();
    // ArthmeticOp();
    // ifStatment();
    // ifElse();
    // bitwise();

    return 0;
}

// int main(void){
//     int num1 = 0;
//     int num2 = 0;
//     int ttl = 0;
//     printf("Please enter first number: \n");
//     scanf("%d", &num1);
//     printf("Please enter second number: \n");
//     scanf("%d", &num2);
//     ttl = num1 + num2;
//     printf("Total number is %d\n",ttl);

//     return 0;
// }

// interger contain both positive and negative value, and zero.
// bit = binary digit
// byte = unit of digit information, That's why (1 byte = 8 bit).
// \ is for escape sequence 
// eg. \n new line, \t horizontal tab, \a for alert, \\ is for \ and \* is for *
// %d is to read decimal digit and & is address operator(&num1 means address of num1)
// open Memory watch >> 0x00000000 is memory address keep with hex value
// opne Watch tab >> name will be num1 and value will be input value.

// void op(){
//     int a = 15;
//     int b = 10;
//     int z = a * b;
    
//     printf("a and b multiple is %d",z);
// }

// There are 8 types of operators,
// 1 Arthmetic operators
// 2 Relational operators
// 3 Logial operators
// 4 Assignment operators
// 5 Increments and Decrement operators
// 6 Conditional operators
// 7 Bitwise operators
// 8 Special operators

// void UnaryBinary(){
//     int a = 10;
//     int b = 20;
//     int z = -a; //unary minus
//     int x = b -a; // binary minus

//     printf("unary minus is %d\n",z);
//     printf("binary minus is %d\n",x);
// }

// except Assginment, Conditional, Relational operator other operators have unary opertor and pinary operator
// e.g. -a unary minus, b - a binary minus

// void ArthmeticOp(){
//     int a = 10;
//     int b = 5;
//     int x,y,z,i,j;

//     x = a + b;
//     y = a - b;
//     z = a * b;
//     i = a / b;
//     j = a % b;

//     printf("a and b addition is %d\n",x);
//     printf("a and b subtraction is %d\n",y);
//     printf("a and b multiplication is %d\n",z);
//     printf("a and b division is %d\n",i);
//     printf("a and b remainder is %d\n",j);
// }

// Sequence Structure, Selection Structure, Itreration Structure
// Sequence Structure is the code that work line by line as it write
// Selection Structure is "if" "if else" "switch" condition
// Iteration Structure is "while" "do while" "for" loop

// Selection Structure "if"

//  void ifStatment(){
//     int first = 0;
//     int sec = 0;
//     int ttl = 0;
//     printf("Please enter first number:");
//     scanf("%d",&first);

//     printf("Please enter second number:");
//     scanf("%d",&sec);

//     ttl = first+sec;
//     if (ttl == 15)
//     {
//         printf("Your total number is equal 15,THIS IS ORGIN\n");
//     }
//     if (ttl > 15)
//     {
//         printf("Your total number is greater than origin,FIND ORGIN xxDIGITS\n");
//     }
//     if (ttl < 15)
//     {
//         printf("Your total number is than origin,FIND ORGIN xxDIGITS\n");
//     }
//  }

// Selection Structure "if else"

// int ifElse(){
//     int n1 = 0;
//     printf("enter a number\n");
//     scanf("%d",&n1);

//     if (n1 > 5)
//     {
//         printf("your number is greater than 5\n");
//     }
//     else
//     {
//         printf("your number is less than 5\n");
//     }
//     return 0;   
// }

// Starting from last 2 lines of page 22 to half of 34
    // I'm not writing switch statement
    // 3 loop also "while" "do while" "for"
    // and also not doing "&& || !"

// There are 6 bitwise operator
    // "&" Bitwise AND
    // "|" Bitwise OR
    // "^" Bitwise XOR
    // "~" Bitwise complement
    // "<<" Shift left
    // ">>" Shift right

// AND >> only 1&1 is 1 the rest is 0
// OR >> if it is 1 ans is 1
// XOR >> if it is same ans is 0 else ans 1

// void bitwise(){
//     int a = 12, b = 25;
//     printf("Bitwise AND Output = %d\n",a&b);

//     int x = 12, y = 25;
//     printf("Bitwise OR Output = %d\n", x|y);

//     int i = 12, j = 25;
//     printf("Bitwise XOR Output = %d\n",x^y);
// }