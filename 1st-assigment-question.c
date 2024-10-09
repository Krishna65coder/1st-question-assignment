#include <stdio.h>

void decimal_converter(int decimal) {
    printf("Binary: \t");
    for(int i = 31; i >= 0; --i) {
        (decimal & (1 << i)) ? printf("1") : printf("0");
    }
    printf("\nHexadecimal: %x\n", decimal);
    printf("Octal: %o\n", decimal);
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimal_converter(decimal);
    return 0;
}

