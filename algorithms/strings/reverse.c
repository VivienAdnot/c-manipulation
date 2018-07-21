#include <string.h>
#include <stdlib.h>

char* reverse(const char* str1) {
    int i;
    int j = 0;
    int length = strlen(str1);

    // we use length + 1 because we need to insert the ending char
    char* str2 = malloc((length + 1) * sizeof(char));

    for (i = length - 1; i >= 0; i--) {
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';

    return str2;
}
