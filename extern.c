#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include"main.c"

int externFile(){
    extern int globle;
    printf("This is from other file value is %d\n",globle);
    return 0;
}