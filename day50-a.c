#include <stdio.h>

int main() {
    int day, month, year;
    char monthName[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("Date in new format: %02d-%s-%d\n", day, monthName[month - 1], year);

    return 0;
}
