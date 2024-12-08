#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello %s!\n", "Numbers!");
    int num = 1234;
    printf("Decimal: %d\n", num);

    // x: format value as hexadecimal numeral
    printf("Hex    : %x\n", num);

    printf("%ld\n", __STDC_VERSION__);

    return 0;
}