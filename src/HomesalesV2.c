// #include <ctype.h>
// #include <stdio.h>
// #include <stdbool.h>
//
// //Arav Halade
// //02/16/25
// //Cop 1220
// //Homesales
//
// int main(void)
// {
//     static int priceInputD = 0;
//     static int priceInputE = 0;
//     static int priceInputF = 0;
//     static char salesIntial;
//     static int total;
//     static bool x = true;
//
//     while (x)
//     {
//         printf("Enter your Salesman intial: ");
//         scanf(" %c", &salesIntial);
//
//         salesIntial = toupper(salesIntial);
//
//         switch (salesIntial)
//         {
//         case 'D':
//             printf("Enter the sale value: ");
//             scanf("%d",&priceInputD);
//             break;
//
//         case 'E':
//             printf("Enter the sale value: ");
//             scanf("%d",&priceInputE);
//             break;
//
//         case 'F':
//             printf("Enter the sale value: ");
//             scanf("%d",&priceInputF);
//             break;
//
//         case 'Z':
//             total = priceInputD + priceInputE + priceInputF;
//             printf("Your grand total is: %d", total);
//             if (priceInputD > priceInputE)
//             {
//                 if (priceInputD > priceInputF)
//                 {
//                     printf("\nHighest Sale: D");
//                 }
//             }
//
//             if (priceInputE > priceInputD)
//             {
//                 if (priceInputE > priceInputF)
//                 {
//                     printf("\nHighest Sale: E");
//                 }
//             }
//
//             if (priceInputF > priceInputD)
//             {
//                 if (priceInputF > priceInputE)
//                 {
//                     printf("\nHighest Sale: F ");
//                 }
//             }
//             x = false;
//             break;
//
//         default:
//             printf("Intermediate output: Error, invalid salesperson selected, please try again \n");
//             break;
//         }
//     }
//     return 0;
// }