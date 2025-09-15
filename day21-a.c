#include <stdio.h>
#include <math.h>

int swapFirstLastDigit(int num) {
    
    if (num >= 0 && num < 10) {
        return num;
    }

    int digits = (int)log10(num) + 1;  
    int firstDigit = num / (int)pow(10, digits - 1);
    int lastDigit = num % 10;

    
    int middlePart = num % (int)pow(10, digits - 1);
   
    middlePart /= 10;

    
    int swappedNum = lastDigit * (int)pow(10, digits - 1);   
    swappedNum += middlePart * 10;                           
    swappedNum += firstDigit;                                

    return swappedNum;
}

int main() {
    int num;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = swapFirstLastDigit(num);
    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}
