// // #include <ctype.h>
// // #include <stdio.h>
// // #include <stdbool.h>
// //
// // //Arav Halade
// // //3/18/25
// // //HomeSales V3
// //
// #include <ctype.h>
// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
//
// typedef struct {
//     char name[20];
//     char initial;
//     int sales;
// } SalesPerson;
//
// int main(void)
// {
//     char salesInitial;
//     int total = 0;
//     bool x = true;
//
//     SalesPerson salesPeople[3] = {
//         {"Danielle", 'D', 0},
//         {"Edward", 'E', 0},
//         {"Francis", 'F', 0}
//     };
//
//     while (x)
//     {
//         printf("Enter your Salesman initial (D, E, F, or Z to exit): ");
//         scanf(" %c", &salesInitial);
//
//         salesInitial = toupper(salesInitial);
//
//         if (salesInitial == 'Z')
//         {
//             total = 0;
//             for (int i = 0; i < 3; i++)
//             {
//                 total += salesPeople[i].sales;
//             }
//
//             printf("Your grand total is: %d", total);
//
//             int maxIndex = 0;
//             for (int i = 1; i < 3; i++)
//             {
//                 if (salesPeople[i].sales > salesPeople[maxIndex].sales)
//                 {
//                     maxIndex = i;
//                 }
//             }
//
//             printf("\nHighest Sale: %c (%s) with $%d",
//                    salesPeople[maxIndex].initial,
//                    salesPeople[maxIndex].name,
//                    salesPeople[maxIndex].sales);
//
//             x = false;
//         }
//         else
//         {
//             int salesPersonIndex = -1;
//             for (int i = 0; i < 3; i++)
//             {
//                 if (salesPeople[i].initial == salesInitial)
//                 {
//                     salesPersonIndex = i;
//                     break;
//                 }
//             }
//
//             if (salesPersonIndex != -1)
//             {
//                 int saleValue;
//                 printf("Enter the sale value for %s: ", salesPeople[salesPersonIndex].name);
//                 scanf("%d", &saleValue);
//                 salesPeople[salesPersonIndex].sales += saleValue;
//             }
//             else
//             {
//                 printf("Error, invalid salesperson selected, please try again\n");
//             }
//         }
//     }
//
//     return 0;
// }