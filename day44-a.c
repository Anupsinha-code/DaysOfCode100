#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);  

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= '0' && ch <= '9') {
            digits++;
        } 
        else if (ch == ' ') {
            spaces++;
        } 
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
          
        } 
        else {
            special++;
        }

        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
