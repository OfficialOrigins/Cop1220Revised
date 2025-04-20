#include <stdio.h>
#include "unit_tests.h"  // Header file we'll create

typedef struct {
    char initial;
    int sales;
} SalesRecord;

void runUnitTest(const char* testName, SalesRecord sales[], int count) {
    int total = 0;
    int maxSale = 0;
    char topSalesperson = '\0';

    for (int i = 0; i < count; i++) {
        total += sales[i].sales;
        if (sales[i].sales > maxSale) {
            maxSale = sales[i].sales;
            topSalesperson = sales[i].initial;
        }
    }

    printf("\n%s\n", testName);
    printf("Grand Total: $%d\n", total);
    printf("Highest Sale: %c\n", topSalesperson);
}

void runAllUnitTests() {
    // Unit Test #1
    SalesRecord test1[] = {
        {'D', 179000}
    };
    runUnitTest("Unit Test #1", test1, 1);

    // Unit Test #2
    SalesRecord test2[] = {
        {'F', 350000},
        {'F', 550000}
    };
    runUnitTest("Unit Test #2", test2, 2);

    // Unit Test #3
    SalesRecord test3[] = {
        {'D', 155000},
        {'E', 89000}
    };
    runUnitTest("Unit Test #3", test3, 2);

    // Unit Test #4
    SalesRecord test4[] = {
        {'E', 511009},
        {'D', 849151},
        {'F', 1512000}
    };
    runUnitTest("Unit Test #4", test4, 3);
}
