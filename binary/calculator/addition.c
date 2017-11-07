#include <string.h>
#include <stdlib.h>

char add(char a, char b);

char* addition(char str1[], char str2[]) {
    int length = strlen(str1);
    //int lengthStr2 = strlen(str2);
    int i;

    char* result = malloc((length + 1) * sizeof(char));

    for (int i = length; i >= 0; i--) {
        result[i] = add(str1[i], str2[i]);
    }
    result[length] = '\0';

    return result;
}

char add(char a, char b) {
    if (a == '0' && b == '0') {
        return '0';
    }
    else if (a == '1' && b == '0') {
        return '1';
    }
    else if (a == '0' && b == '1') {
        return '1';
    }
    else if (a == '1' && b == '1') {
        return 'A';
    } else {
        // todo throw
    }
}
