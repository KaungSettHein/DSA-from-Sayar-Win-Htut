#include<stdio.h>
int main(void){
    
    op();

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

void op(){
    int a = 15;
    int b = 10;
    int z = a * b;
    
    printf("a and b multiple is %d",z);
}

// There are 8 types of operators,
// 1 Arthmetic operators
// 2 Relational operators
// 3 Logial operators
// 4 Assignment operators
// 5 Increments and Decrement operators
// 6 Conditional operators
// 7 Bitwise operators
// 8 Special operators

// except Assginment, Conditional, Relational operator other operators have unary opertor and pinary operator
// e.g. -a unary minus, b - a binary minus