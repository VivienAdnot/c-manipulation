#include<stdlib.h>
#include<stdio.h>

#include "../utilities/print.h"
#include "arrays/bubbleSort.h"

#define ARRAY_SIZE 5

void test()
{
    int arr[ARRAY_SIZE] = {2, 5, 3, 1, 4};

    bubbleSort(arr, ARRAY_SIZE);
    printArray(arr, ARRAY_SIZE);
}
