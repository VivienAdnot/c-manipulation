#include <stdlib.h>
#include<stdio.h>
//#include "binary/converter/menu.h"

#include "utilities/print.h"
#include "concepts/arrays/bubbleSort.h"

int main()
{
    int arr[6] = {5, 2, 4, 7, 3, 6};

    int i;
    int arrlength = 6;

    printf("start\n");
    printArray(arr, arrlength);

    bubbleSort(arr, arrlength);

    printf("end\n");

    printArray(arr, arrlength);

    // char[] greetings = printmenu();
    // printf("printmenu return = %s\n", greetings);

    // int ch;
    //
    // for( ch = 75 ; ch <= 100; ch++ ) {
    //     printf("ASCII value = %d, Character = %c\n", ch , ch );
    // }
}
