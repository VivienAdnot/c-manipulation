#include <stdlib.h>
#include<stdio.h>
#include "binary/converter/menu.h"

int main()
{
    char val = printmenu();
    printf("printmenu return = %c\n", val );

    int ch;

    for( ch = 75 ; ch <= 100; ch++ ) {
        printf("ASCII value = %d, Character = %c\n", ch , ch );
    }
}
