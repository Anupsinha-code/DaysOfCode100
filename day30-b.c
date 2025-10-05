#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Count of positive numbers = %d\n", pos);
    printf("Count of negative numbers = %d\n", neg);
    printf("Count of zeros = %d\n", zero);

    return 0;
}
