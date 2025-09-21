#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

    
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit = %f\n", profitOrLoss);
        printf("Profit Percentage = %f%%\n", percentage);
    }
    else if (sellingPrice < costPrice) {
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss = %.2f\n", profitOrLoss);
        printf("Loss Percentage = %f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
