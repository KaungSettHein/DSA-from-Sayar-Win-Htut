#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include"extern.h"

int externFile(){    
    printf("This is from other file value is %d\n",globle);
    return 0;
}