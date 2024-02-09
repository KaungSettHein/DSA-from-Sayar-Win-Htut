#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5
enum colors {BLACK, BLUE, GREEN, CYAN, RED, YELLOW, WHITE};
// void op();
// void UnaryBinary();
// void ArthmeticOp();
// void ifStatment();
// int ifElse();
// void bitwise();
// void complement();
// void ShiftOperator();
// void breakTest();
// void continueTest();
// void evenOdd();
// void vowelCheck();
// void largestNum();
// void quadratic();
// void floydTri();
// int calculate(int x, int y, int z, int zz);
// int randTest();
// int randFrequentCount();
// int timeRand();
// int compareTwoRand();
// int diceEnum();
// float areaRectangel(float width, float height);
// void autoStorageClass();
// void externStorageClass();
// void counter();
// void TwoDArray();
// void addAndExpandArray();
// void memoryAlloc();
// void memoryCalloc();


// void somevalue(int *F); // pointer usage
// int year = 2024; // if globle and local variable are same name value will be local value
// int globle = 24;

int main(void){
    
    // op();
    // UnaryBinary();
    // ArthmeticOp();
    // ifStatment();
    // ifElse();
    // bitwise();
    // complement();
    // ShiftOperator();
    // breakTest();
    // continueTest();
    // evenOdd();
    // vowelCheck();
    // largestNum();
    // quadratic();
    // floydTri();
    // randTest();
    // randFrequentCount();
    // timeRand();
    // compareTwoRand();
    // diceEnum();
    // autoStorageClass();
    // externStorageClass();
    // counter();
    // TwoDArray();
    // addAndExpandArray();
    // memoryAlloc();
    // memoryCalloc();

    // int number1,number2,number3,number4;
    // printf("Enter 4 digits:");
    // scanf("%d%d%d%d",&number1,&number2,&number3,&number4);
    // printf("The result is %d\n", calculate(number1,number2,number3,number4));

    // int age = 27;
    // printf("In year %d, my age is %d.\n",year,age);

    // float width,height;
    // printf("Enter width of the rectangle:");
    // scanf("%f",&width);
    // printf("Enter height of the rectangle:");
    // scanf("%f",&height);
    // printf("Area of Rectangle is %f\n",areaRectangel(width,height));

    // int A;
    // printf("Enter somevalue:");
    // scanf("%d",&A);
    // somevalue(&A);
    // printf("A(Actural parameter):%d",A);

    // for (int i = 0; i < 5; i++)
    // {
    //     counter();
    // }

    char *ptr;
    ptr = (char*)malloc(10);
    strcpy(ptr,"Programming");
    printf("%s ,address is %u",ptr,ptr);
    ptr = (char*)realloc(ptr,20);
    strcat(ptr," In 'C'");
    printf("\n%s ,address is %u",ptr,ptr);
    free(ptr);
    return 0;
}
//malloc(),calloc(),realloc(),free() 4 functions for memory allocation (type)alloctionfun(size) 
//malloc() and calloc() are not that different but malloc() is better. *(pointer+index) = value; you can put value like this
// realloc() is changing memory size with the existing pointer.
// free() is to clear the value used by those memory pointer.if you printf pointer value it will show the memory address.
// void memoryCalloc(){
//     int *ptr,sum=0;
//     ptr = (int*)calloc(10,sizeof(*ptr));
//     if (ptr!= NULL)
//     {
//         printf("memory is created at %d\n",ptr);
//     }
//     else{
//         printf("cannnot create memory.\n");
//     }
//     for (int i = 0; i < 10; i++)
//     {   
//         *(ptr+i)=i;
//         sum += *(ptr+i);
//         printf("%d value is %d\n",i,*(ptr+i));
//     }
//     printf("Sum of all values at each block:%d\n",sum);
//     free(ptr);
// }

// void memoryAlloc(){
//     int *ptr;
//     ptr = (int*)malloc(10 * sizeof(*ptr));
//     if (ptr!= NULL)
//     {
//         printf("memory is created at %d\n",ptr);
//         *(ptr+1)=10;
//         *(ptr+3)=30;
//         *(ptr+4)=40;
//         *(ptr+5)=50;
//         *(ptr+6)=60;
//     }
//     else{
//         printf("cannnot create memory.\n");
//     }
//     for (int i = 0; i < 7; i++)
//     {
//         printf("%d value is %d\n",i,*(ptr+i));
//     }
//     free(ptr);
// }

// void addAndExpandArray(){
//     int valueNum,indexNum,number;
//     printf("Enter array length:");
//     scanf("%d",&number);
//     int arr[number];
//     for (int i = 0; i < number; i++)
//     {
//          printf("Enter array value for %d index:",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("Array data element are:");
//     for (int i = 0; i < number; i++)
//     {
//         printf("%3d",arr[i]);
//     }
//     printf("\nEnter array value:");
//     scanf("%d",&valueNum);
//     printf("Enter array index:");
//     scanf("%d",&indexNum);
//     arr[indexNum] = valueNum;
//     printf("Array after value change:");
//     for (int i = 0; i < number; i++)
//     {
//         printf("%3d",arr[i]);
//     }
//     printf("\nDo you want to add one more value and array length?Y/N:");
//     char ans;
//     scanf("%s",&ans);
//     if (ans == 'Y' || ans == 'y')
//     {
//         printf("Enter array value:");
//         scanf("%d",&valueNum);
//         printf("Enter array index:");
//         scanf("%d",&indexNum);
//        for (int i = number; i > indexNum; i--) // 4,3,2 > 2
//             arr[i] = arr[i - 1];               // arr[4,3] = arr[3,2]
//         }
//         arr[indexNum] = valueNum;
//         number++;
//         printf("Array after value change:");
//         for (int i = 0; i < number; i++)
//         {
//             printf("%3d",arr[i]);
//         }
//     }else
//     {
//         return 0;
//     }
//     printf("\n");
// }

// void TwoDArray(){
//     int arr[] = { 10,11,12,13,14,15};
//     int a[3][3]= { {1,2,3},{4,5,6},{7,8,9} } ;
//     int row = 3;
//     int col =3;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("this is arr %d\n",arr);
//         printf("this is *arr %d\n",*arr);
//         printf("this is *(arr+i) %d\n",*(arr+i));
//         printf("this is *(i+arr) %d\n",*(i+arr));
//         printf("this is arr[i] %d\n",arr[i]);
//         printf("this is i[arr] %d\n",i[arr]);
//         printf("%3d%3d%3d%3d%3d%3d\n",i[arr],arr[i],*(i+arr),*(arr+i),*arr,arr);
//         printf("===========\n");
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%3d",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("===========\n");
//     int b[3][2]= { {0,2},{0,5},{0,8} } ;
//     int Ncol = 2;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < Ncol; j++)
//         {
//             printf("%3d",b[i][j]);
//         }
//         printf("\n");
//     }    
// }

// void counter(){
//     int counter = 0;
//     static int staticCounter = 0;
//     counter++;
//     staticCounter++;
//     printf("counter: %d\n",counter);
//     printf("static counter: %d\n",staticCounter);
// }

// void externStorageClass(){
//     globle = 33;
//     printf("globle value change from 24 to %d in this class\n",globle);
// }

// void autoStorageClass(){ // auto storage class work like local variable
//     auto valueOne = 20;
//     auto extValue = 20;
//     {
//         auto valueOne = 30;
//         auto interValue = 30;
//         printf("Auto Storage value inside scope:%d\n",valueOne);
//         printf("External Auto Storage value:%d\n",extValue); // can call
//     }
//     printf("Auto Storage value outside scope:%d\n",valueOne);
//     // printf("Internal Auto Storage value:%d",interValue);// can`t call
// }

// void somevalue(int *F){
//     *F = *F*2;
//     printf("F(formal paramenter):%d",*F);
// }
// int calculate(int x, int y, int z, int zz){
//     return (x+y+z)/zz;
// }

// float areaRectangel(float w, float h){
//      float area;
//      area = w*h;
//     return area;
// }

// int randTest(){
//     for (int i = 1; i <= 30; i++)
//     {
//         printf("%5d",1+(rand()%6)); // %6 is scaling for number to come out max 6, %5d means print an int with a minimum field width of 5. The the value isn't 5 characters wide it will be left padded with space. 
//         if (i%5 == 0)
//         {
//             puts(""); // next line for every condition in the if
//         }    
//     }
//     return 0;
// }

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

// "~" Bitwise complement
// Bitwise complement can calculate to the bit level value so program can run faster and power save
// 1's complement and 2's complement
// 1's complement of the decimal value is change decimal to binary and toggle the bit.
// e.g decimal 35 to binary is 00100011. Toggle that to 11011100 is the 1's complement of 35.
// 2's complement is the to add 1 to 1's complement of number.
// It is mostly use to find negative value in the form of binary format of the decimal digit.
// It's based on usage. If you put 2's complement value to the calulator output will be something else.
// We add negative sign(-) and operate on that value. That is all my understanding of the bitwise complement for now.

// formula for the 2'complement is 
// ~N = -(~(~N)+1)
// ~N = -(N+1)
// This is in the book I currently studying but the Bing AI state that the formula is ~N+1

// void complement(){
//     int x = 35, y = -35;
//     printf("1's complement of positive number is %d\n",~x);
//     printf("1's complement of negative number is %d\n",~y);
//     int P = -(~(~x)+1);
//     int N = -(~(~y)+1);
//     printf("2's complement of positive number is %d\n",P);
//     printf("2's complement of negative number is %d\n",N);
//     int aP = ~x+1;
//     int aN = ~y+1;
//     printf("2's complement of positive number is %d\n",aP);
//     printf("2's complement of negative number is %d\n",aN);
// }


//For shift operator, Left shift is multiply the value x to 2^N. Right shift is divide the value of x to 2^N.

// void ShiftOperator(){
//     int x = 30;
//     printf("Left shift by 1 bit (x*2) = %d\n\n",x<<1);
//     printf("Left shift by 2 bit (x*2*2) = %d\n\n",x<<2);
//     printf("Left shift by 3 bit (x*2*2*2) = %d\n\n",x<<3);
//     printf("Left shift by 4 bit (x*2*2*2*2) = %d\n\n\n",x<<4);
//     int y = 500;
//     printf("Right shift by 1 bit (y/2) = %d\n\n",y>>1);
//     printf("Right shift by 2 bit (y/2*2) = %d\n\n",y>>2);
//     printf("Right shift by 3 bit (y/2*2*2) = %d\n\n",y>>3);
//     printf("Right shift by 4 bit (y/2*2*2*2) = %d\n\n",y>>4);
// }

// sizeof() is for size of the data type fo the variable.I'm not writing eg code for this.

// void breakTest(){
//     char opera;
//     // bool check;
//     double fNum, secNum;
//     printf("Please enter Two Numbers:");
//     scanf("%2lf %2lf", &fNum, &secNum);
//     printf("Enter an operator (+,-,*,/):");
//     scanf(" %c", &opera);
//     // do
//     // {
//     //     printf("Enter an operator (+,-,*,/):");
//     //     scanf(" %c", &opera);
//     //     if(opera != '+' && opera != '-' && opera != '*' && opera != '/'){
//     //         printf("\t\t\tERROR!\n\t\tOperator is not correct\n");
//     //         check = true;      
//     //     }else{
//     //         check = false;
//     //     }
//     // } while (check);
//     switch (opera)
//     {
//     case '+':
//         printf("%.2lf + %2.lf = %.3lf\n",fNum, secNum, fNum + secNum);
//         break;
//     case '-':
//         printf("%.2lf - %2.lf = %.3lf\n",fNum, secNum, fNum - secNum);
//         break;
//     case '*':
//         printf("%.2lf * %2.lf = %.3lf\n",fNum, secNum, fNum * secNum);
//         break;
//     case '/':
//         printf("%.2lf / %2.lf = %.3lf\n",fNum, secNum, fNum / secNum);
//         break;
//     default:
//         printf("\t\t\tERROR!\n");
//         break;
//     }
// }

// void continueTest(){
//     int num;
//     int sum = 0;
//     for (int i = 1; i <= 6; i++)
//     {
//         printf("Please enter mark %d:",i);
//         scanf("%d", &num);
//         if (num < 30)
//         {
//             printf("Fail! We are not adding this to total mark\n");
//             continue; // If the code hit the "continue;" it start from "for loop"
//         }
//         sum += num;
//     }
//     printf("Sum = %d\n",sum);
// }

// goto name <- go to the name code and stop working all the code below goto name

// void evenOdd(){
//     int num;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     if ((num%2) == 0)
//     {
//         printf("This is even number.\n");
//     }else{
//         printf("This is odd number.\n");
//     }
// }

// void vowelCheck(){
//     char c;
//     int smallVowel, bigVowel;
//     printf("Please Enter a alphabet:");
//     scanf("%c",&c);
//     smallVowel = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//     bigVowel = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//     if (smallVowel || bigVowel)
//     {
//         printf("%c is a vowel.\n",c);
//     }else{
//         printf("%c is a consonant.\n",c);
//     }
// }

// void largestNum(){
//     double first, second, third, fourth;
//     printf("Enter first Number to compare:");
//     scanf("%lf",&first); // if you use %f or %1f for double in scanf it will generate different value than you input, you should use %lf for float but in printf either is good.
//     printf("Enter second Number to compare:");
//     scanf("%lf",&second);
//     printf("Enter third Number to compare:");
//     scanf("%lf",&third);
//     printf("Enter fourth Number to compare:");
//     scanf("%lf",&fourth);
//     if ((first > second) && (first > third) && (first > fourth))
//     {
//         printf("%.2f is the largest number\n",first);
//     }
//     else if ((second > first) && (second > second) && (second > third))
//     {
//         printf("%.2f is the largest number\n",second);
//     }
//     else if ((third > first) && (third > second) && (third > fourth))
//     {
//         printf("%.2f is the largest number\n",third);
//     }
//     else
//     {
//         printf("%.2f is the largest number\n",fourth);
//     }
// }

// void quadratic(){
//     double a,b,c;
//     double determinant, root1, root2, realPart, imaginaryPart;
//     printf("Enter value of a and b, c:");
//     scanf("%lf %lf %lf",&a,&b,&c);
//     determinant = b*b - 4*a*c;
//     if (determinant > 0)
//     {
//         root1 = (-b + sqrt(determinant))/(2*a);
//         root2 = (-b - sqrt(determinant))/(2*a);
//         printf("Positive value is %.2lf and Negative value is %.2lf\n",root1,root2);
//     }
//     else if (determinant == 0)
//     {
//         root1 = -b/(2*a);
//         printf("root1 = root2 = %.2lf\n",root1);
//     }
//     else
//     {
//         realPart = -b/(2*a);
//         imaginaryPart = sqrt(-determinant)/(2*a);
//         printf("root1 = %.2lf+%.2fi and root1 = %.2lf+%.2fi\n",realPart,imaginaryPart,realPart,imaginaryPart);
//     }
// }

//  void floydTri(){
//     int a = 1,i,j;
//     int input = 0;
//     printf("Please enter row number:");
//     scanf("%d",&input);
//     for (i = 1; i <= input;i++)
//     {
//         for (j = 1; j <= i;j++)
//         {
//             printf("%d",a);            
//         }
//         printf("\n");  
//     } 
// }

// int randFrequentCount(){
//     int oneTime = 0, twoTime = 0, threeTime = 0, fourTime = 0, fiveTime = 0;
//     for (int i = 1; i < 10000; i++)
//     {
//         int number = 1+(rand()%6);
//         switch (number)
//         {
//         case 1:
//             ++oneTime;
//             break;       
//         case 2:
//             ++twoTime;
//             break;
//         case 3:
//             ++threeTime;
//             break;
//         case 4:
//             ++fourTime;
//             break;
//         case 5:
//             ++fiveTime;
//             break;               
//         default:
//             break;
//         }
//     }
//     printf(" %s%10s\n","Number","Frequency");
//     printf("   1%10d\n",oneTime);
//     printf("   2%10d\n",twoTime);
//     printf("   3%10d\n",threeTime);
//     printf("   4%10d\n",fourTime);
//     printf("   5%10d\n",fiveTime);
// }

// int timeRand(){
//     srand(time(NULL));
//     for (int i = 1; i < 20; i++)
//     {
//         int x = rand() % 100;
//         printf("%10u", x);
//     }
//     printf("\n");
//     return 0;
// }

// int compareTwoRand(){
//     int computerNo, humanNo;
//     srand(time(NULL));
//     computerNo = rand()%10+1;
//     do
//     {
//         printf("Number 1-10:");
//         scanf("%d",&humanNo);  
//         if(computerNo<humanNo){
//             puts("Computer number is lower");
//         }else if (computerNo>humanNo)
//         {
//             puts("Human number is lower");
//         }
//     } while (humanNo != computerNo);
//     printf("They are the same value");
//     return 0;
// }

// int diceEnum(){
//     enum colors to_out;
//     to_out = YELLOW;
//     printf("this is it >> >> >> %5d\n", to_out);
//     return 0;
// }