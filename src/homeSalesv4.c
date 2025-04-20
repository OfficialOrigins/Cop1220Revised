#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include "unit_tests.h"  // Include unit test header

#define MAX_PEOPLE 10

typedef struct {
    char name[20];
    char initial;
    int sales;
} SalesPerson;

// Load salespeople from file
int loadSalesPeople(SalesPerson salesPeople[], int maxPeople) {
    FILE *file = fopen("salespeople.txt", "r");

    int count = 0;

    if (file == NULL) {
        return 0;  // Silently return 0 if no file
    }

    while (count < maxPeople && fscanf(file, "%19s %c %d",
           salesPeople[count].name,
           &salesPeople[count].initial,
           &salesPeople[count].sales) == 3) {
        count++;
    }

    fclose(file);
    return count;
}

// Save salespeople to file
void saveSalesPeople(SalesPerson salesPeople[], int count) {
    FILE *file = fopen("salespeople.txt", "w");

    if (file == NULL) {
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %c %d\n",
                salesPeople[i].name,
                salesPeople[i].initial,
                salesPeople[i].sales);
    }

    fclose(file);
}

// Log individual sale
void logSale(const char *name, char initial, int saleAmount) {
    FILE *logFile = fopen("sales_log.txt", "a");

    if (logFile == NULL) {
        return;
    }

    fprintf(logFile, "%s (%c): $%d\n", name, initial, saleAmount);
    fclose(logFile);
}

int main() {
    char salesInitial;
    int total = 0;
    SalesPerson salesPeople[MAX_PEOPLE];

    // Menu to run unit tests
    printf("Run Unit Tests? (Y/N): ");
    char choice;
    scanf(" %c", &choice);
    if (toupper(choice) == 'Y') {
        runAllUnitTests();
        return 0;
    }

    int numSalesPeople = loadSalesPeople(salesPeople, MAX_PEOPLE);
    if (numSalesPeople == 0) {
        printf("No salespeople data found. Please create 'salespeople.txt' with entries.\n");
        printf("Format: Name Initial Sales (e.g., Danielle D 0)\n");
        return 1;
    }

    printf("Loaded %d salespeople.\n", numSalesPeople);

    while (true) {
        printf("\nSalespeople:\n");
        for (int i = 0; i < numSalesPeople; i++) {
            printf(" - %s (%c): $%d\n", salesPeople[i].name, salesPeople[i].initial, salesPeople[i].sales);
        }

        printf("\nEnter Salesperson Initial (Z to exit): ");
        scanf(" %c", &salesInitial);
        salesInitial = toupper(salesInitial);

        if (salesInitial == 'Z') {
            total = 0;
            for (int i = 0; i < numSalesPeople; i++) {
                total += salesPeople[i].sales;
            }

            printf("\nTotal Sales: $%d\n", total);

            int maxIndex = 0;
            for (int i = 1; i < numSalesPeople; i++) {
                if (salesPeople[i].sales > salesPeople[maxIndex].sales) {
                    maxIndex = i;
                }
            }

            printf("Top Salesperson: %s (%c) - $%d\n",
                   salesPeople[maxIndex].name,
                   salesPeople[maxIndex].initial,
                   salesPeople[maxIndex].sales);

            saveSalesPeople(salesPeople, numSalesPeople);
            break;
        }

        int foundIndex = -1;
        for (int i = 0; i < numSalesPeople; i++) {
            if (salesPeople[i].initial == salesInitial) {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex == -1) {
            printf("Invalid initial. Try again.\n");
            continue;
        }

        int saleAmount;
        printf("Enter sale amount for %s: ", salesPeople[foundIndex].name);
        scanf("%d", &saleAmount);

        if (saleAmount < 0) {
            printf("Sale amount must be positive.\n");
            continue;
        }

        salesPeople[foundIndex].sales += saleAmount;
        logSale(salesPeople[foundIndex].name, salesInitial, saleAmount);

        printf("Sale of $%d added to %s. New total: $%d\n",
               saleAmount,
               salesPeople[foundIndex].name,
               salesPeople[foundIndex].sales);
    }

    return 0;
}
