#include<stdio.h>
#include "calculator/addition.h"

void test()
{
    char test[5] = "1010";
    char test2[5] = "1000";

    printf("result: %s\n", addition(test, test2));
}
