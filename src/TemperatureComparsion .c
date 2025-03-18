#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
//Arav Halade
//3/18/25
//HomeSales V3

int main(void) {
    static char salesIntial;
    static int total;
    static bool x = true;
    int salesP[3] = {0, 0, 0}; // Initialize array elements to 0

    while (x) {
        printf("Enter your Salesman intial: ");
        scanf(" %c", &salesIntial);
        salesIntial = toupper(salesIntial);

        switch (salesIntial) {
        case 'D':
            printf("Enter the sale value: ");
            scanf("%d", &salesP[0]);
            break;
        case 'E':
            printf("Enter the sale value: ");
            scanf("%d", &salesP[1]);
            break;
        case 'F':
            printf("Enter the sale value: ");
            scanf("%d", &salesP[2]);
            break;
        case 'Z':
            total = salesP[0] + salesP[1] + salesP[2];
            printf("Grand Total: $%d", total);

            if (salesP[0] >= salesP[1] && salesP[0] >= salesP[2]) {
                printf("\nHighest Sale: D");
            } else if (salesP[1] >= salesP[0] && salesP[1] >= salesP[2]) {
                printf("\nHighest Sale: E");
            } else if (salesP[2] >= salesP[0] && salesP[2] >= salesP[1]) {
                printf("\nHighest Sale: F");
            }

            x = false;
            break;
        default:
            printf("Error, invalid salesperson selected, please try again \n");
            break;
        }
    }
    return 0;
}