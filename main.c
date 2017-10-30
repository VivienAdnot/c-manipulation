#include <stdlib.h>
#include<stdio.h>
//#include "binary/converter/menu.h"

#include "utilities/print.h"
#include "concepts/arrays/bubbleSort.h"

int main()
{
    int arr[5] = {2, 5, 3, 1, 4};

    int i;
    int arrlength = 5;

    bubbleSort(arr, arrlength);
    printArray(arr, arrlength);

    // char[] greetings = printmenu();
    // printf("printmenu return = %s\n", greetings);

    // int ch;
    //
    // for( ch = 75 ; ch <= 100; ch++ ) {
    //     printf("ASCII value = %d, Character = %c\n", ch , ch );
    // }
}
