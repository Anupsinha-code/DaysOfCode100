#include <stdio.h>

int main() {
    int Seconds, hours, minutes, seconds;

    
    printf("Enter time in seconds: ");
    scanf("%d", &Seconds);

    
    hours = Seconds / 3600;
    Seconds = Seconds % 3600;

    minutes = Seconds / 60;
    seconds = Seconds % 60;

    
    printf("Time: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}