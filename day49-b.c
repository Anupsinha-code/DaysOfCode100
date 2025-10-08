#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);  
    
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && i < lastSpace) {
            printf("%c. ", name[i + 1]);
        }
    }

   
    if (lastSpace != -1)
        printf("%s\n", &name[lastSpace + 1]);
    else
        printf("\n"); 

    return 0;
}
