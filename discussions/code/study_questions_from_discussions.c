/**
 * 2.2 (a)
 */

// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(int argc, char const *argv[])
// {
//     int a = 5, b = 10;
//     printf("Before swap: a = %d and b = %d\n", a, b);
//     swap(&a, &b);
//     printf("After swap: a = %d and b = %d\n", a, b);

//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>

int32_t mystrlen(char *str) {
    int32_t i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    assert(mystrlen(str) == (int32_t)strlen(str));

    printf("Length of string is: %d\n", mystrlen(str));
    return 0;
}
