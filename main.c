#include <stdlib.h>
#include<stdio.h>
#include "binary/converter/menu.h"

int main()
{
    printmenu();

    int ch;

    for( ch = 75 ; ch <= 100; ch++ ) {
        printf("ASCII value = %d, Character = %c\n", ch , ch );
    }
}
