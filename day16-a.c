#include <stdio.h>

void printBinary(int num) {
    
    if (num == 0) {
        printf("0");
        return;
    }

    
    int binary[32];
    int index = 0;

    
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int number;

    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Only positive integers are supported.\n");
        return 1;
    }

    printf("Binary representation: ");
    printBinary(number);
    printf("\n");

    return 0;
}
