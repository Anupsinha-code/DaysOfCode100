#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  
    int i;
    char first = '\0';

    printf("Enter a string (lowercase letters only): ");
    gets(str);  

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {  
            if (freq[ch - 'a'] == 1) {  
                first = ch;
                break;
            }
            freq[ch - 'a']++; 
    }

    if (first != '\0')
        printf("First repeating lowercase alphabet: %c\n", first);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
