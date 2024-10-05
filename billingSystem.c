#include<stdio.h>
int main()
{
  char customerName[100]; //price * quantity = total cost
  int unitQuantity; // number of items bought
  char itemName[100];
  char item1[50];
  char item2[50];
  char item3[50];
  char item4[50];
  char item5[50];
                                                            //taxation
  float unitPrice, subTotal, grandTotal, netTotal, discount, cgst, sgst ;
  float grandTotal1, grandTotal2, grandTotal3, grandTotal4, grandTotal5;
  float cgst1, cgst2, cgst3, cgst4, cgst5;
  float sgst1, sgst2, sgst3, sgst4, sgst5;
  float discount1, discount2, discount3, discount4, discount5;
  float totalItem1, totalItem2, totalItem3, totalItem4, totalItem5;
  float unitPrice1, unitPrice2, unitPrice3, unitPrice4, unitPrice5;
  int unitQuantity1, unitQuantity2, unitQuantity3, unitQuantity4, unitQuantity5;
  int choice = 1; //y for execution
  int option; //for switch statement choices for the user to select

while(choice == 1)
{

  printf("\n===CAMOTRON===\n");
  





printf("\nEnter customer name:  ");
scanf(" %s" ,customerName);


printf("Enter the number of items purchaed:  ");
scanf(" %d" ,&unitQuantity);

printf("\n\n");

switch(unitQuantity)
{

case 1:
 // if one item
printf("Enter item 1:    "); // 4 spaces
scanf(" %s" ,item1);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice1);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity1);
printf("\n\n");

//------------THE INVOICE SECTION------------

printf("           -----CAMOTRON--------\n");
printf("           ---------------------\n\n");

printf(" Date: 25 July 2024\n");
printf(" Invoice To: %s\n" ,customerName);// | 
printf("--------------------------------------\n"); // 38 dashes
printf(" Items\t\tQty\t\tTotal\n\n");
printf("--------------------------------------\n\n");

// -----CALCULATIONS-----

 totalItem1 = unitPrice1 * unitQuantity1; // item 1 total
 subTotal = totalItem1;
float discount1 = subTotal * (float)0.10; //keep "(float)" before a number that is to be divided, to avoid dividing integers.
netTotal = subTotal - discount1;
float cgst1 = netTotal * (float)0.09;
float sgst1 = netTotal * (float)0.09;
grandTotal1 = netTotal - (cgst1 + sgst1);
 

printf(" %s\t\t" ,item1);

printf(" %d\t\t" ,unitQuantity1);
printf(" %.2f\n" ,totalItem1);
printf("\n");


printf("--------------------------------------\n");

printf("Sub Total\t\t\t %.2f\n" ,totalItem1);
printf("Discount @10%%  \t\t\t  %.2f\n" ,discount1);
printf("\t\t\t\t  -----\n");

printf("Net Total  \t\t\t  %.2f\n" ,netTotal);
printf("CGST @9%%  \t\t\t  %.2f\n" ,cgst1);
printf("SGST @9%%  \t\t\t  %.2f\n" ,sgst1);

printf("--------------------------------------\n");
printf("Grand Total  \t\t\t  %.2f\n" ,grandTotal1);
printf("--------------------------------------\n");

break;



case 2:
 //if two items

printf("Enter item 1:    ");
scanf(" %s" ,item1);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice1);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity1);
printf("\n\n");

printf("Enter item 2:    ");
scanf(" %s" ,item2);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice2);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity2);
printf("\n\n");

//------------THE INVOICE SECTION------------

printf("           -----CAMOTRON--------\n");
printf("           ---------------------\n\n");

printf(" Date: 25 July 2024\n");
printf(" Invoice To: %s\n" ,customerName);// | 
printf("--------------------------------------\n"); // 38 dashes
printf(" Items\t\tQty\t\tTotal\n\n");
printf("--------------------------------------\n\n");

// -----CALCULATIONS-----

 totalItem1 = unitPrice1 * unitQuantity1;  // item 1 total
 totalItem2 = unitPrice2 * unitQuantity2;
 subTotal = totalItem1 + totalItem2;

float discount2 = subTotal * (float)0.10; //keep "(float)" before a number that is to be divided, to avoid dividing integers.
netTotal = subTotal - discount2;
float cgst2 = netTotal * (float)0.09;
float sgst2 = netTotal * (float)0.09;
grandTotal2 = netTotal - (cgst2 + sgst2);
 

printf(" %s\t\t" ,item1);
printf(" %d\t\t" ,unitQuantity1);
printf(" %.2f\n" ,totalItem1);

printf(" \n %s\t\t" ,item2);
printf(" %d\t\t" ,unitQuantity2);
printf(" %.2f\n" ,totalItem2);
printf("\n");


printf("--------------------------------------\n");

printf("Sub Total\t\t\t %.2f\n" ,subTotal);


printf("Discount @10%%  \t\t\t  %.2f\n" ,discount2);
printf("\t\t\t\t  -----\n");

printf("Net Total  \t\t\t  %.2f\n" ,netTotal);
printf("CGST @9%%  \t\t\t  %.2f\n" ,cgst2);
printf("SGST @9%%  \t\t\t  %.2f\n" ,sgst2);

printf("--------------------------------------\n");
printf("Grand Total  \t\t\t  %.2f\n" ,grandTotal2);
printf("--------------------------------------\n");

break;


case 3:
 //if three items

  printf("Enter item 1:    ");
scanf(" %s" ,item1);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice1);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity1);
printf("\n\n");

printf("Enter item 2:    ");
scanf(" %s" ,item2);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice2);
printf("\n");
printf("Enter the quantity:    ");
scanf("%d" ,&unitQuantity2);
printf("\n\n");


printf("Enter item 3:    ");
scanf(" %s" ,item3);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice3);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity3);
printf("\n\n");

//------------THE INVOICE SECTION------------

printf("           -----CAMOTRON--------\n");
printf("           ---------------------\n\n");

printf(" Date: 25 July 2024\n");
printf(" Invoice To: %s\n" ,customerName);// | 
printf("--------------------------------------\n"); // 38 dashes
printf(" Items\t\tQty\t\tTotal\n\n");
printf("--------------------------------------\n\n");

// -----CALCULATIONS-----

 totalItem1 = unitPrice1 * unitQuantity1;  // item 1 total
 totalItem2 = unitPrice2 * unitQuantity2;
 totalItem3 = unitPrice3 * unitQuantity3;
 subTotal = totalItem1 + totalItem2 + totalItem3;

float discount3 = subTotal * (float)0.10; //keep "(float)" before a number that is to be divided, to avoid dividing integers.
netTotal = subTotal - discount3;
float cgst3 = netTotal * (float)0.09;
float sgst3 = netTotal * (float)0.09;
grandTotal3 = netTotal - (cgst3 + sgst3);
 

printf(" %s\t\t" ,item1);
printf(" %d\t\t" ,unitQuantity1);
printf(" %.2f\n" ,totalItem1);

printf(" %s\t\t" ,item2);
printf(" %d\t\t" ,unitQuantity2);
printf(" %.2f\n" ,totalItem2);

printf(" %s\t\t" ,item3);
printf(" %d\t\t" ,unitQuantity3);
printf(" %.2f\n" ,totalItem3);


printf("--------------------------------------\n");

printf("Sub Total\t\t\t %.2f\n" ,subTotal);


printf("Discount @10%%  \t\t\t  %.2f\n" ,discount3);
printf("\t\t\t\t  -----\n");

printf("Net Total  \t\t\t  %.2f\n" ,netTotal);
printf("CGST @9%%  \t\t\t  %.2f\n" ,cgst3);
printf("SGST @9%%  \t\t\t  %.2f\n" ,sgst3);

printf("--------------------------------------\n");
printf("Grand Total  \t\t\t  %.2f\n" ,grandTotal3);
printf("--------------------------------------\n");

break;


case 4: //if four items

  printf("Enter item 1:    ");
scanf(" %s" ,item1);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice1);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity1);
printf("\n\n");

printf("Enter item 2:    ");
scanf(" %s" ,item2);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice2);
printf("\n");
printf("Enter the quantity:    ");
scanf("%d" ,&unitQuantity2);
printf("\n\n");


printf("Enter item 3 :    ");
scanf(" %s" ,item3);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice3);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity3);
printf("\n\n");

printf("Enter item 4:    ");
scanf(" %s" ,item4);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice4);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity4);
printf("\n\n");

//------------THE INVOICE SECTION------------

printf("           -----CAMOTRON--------\n");
printf("           ---------------------\n\n");

printf(" Date: 25 July 2024\n");
printf(" Invoice To: %s\n" ,customerName);// | 
printf("--------------------------------------\n"); // 38 dashes
printf(" Items\t\tQty\t\tTotal\n\n");
printf("--------------------------------------\n\n");

// -----CALCULATIONS-----

 totalItem1 = unitPrice1 * unitQuantity1;  // item 1 total
 totalItem2 = unitPrice2 * unitQuantity2;
 totalItem3 = unitPrice3 * unitQuantity3;
 totalItem4 = unitPrice4 * unitQuantity4;
 subTotal = totalItem1 + totalItem2 + totalItem3 + totalItem4;

float discount4 = subTotal * (float)0.10; //keep "(float)" before a number that is to be divided, to avoid dividing integers.
netTotal = subTotal - discount4;
float cgst4 = netTotal * (float)0.09;
float sgst4 = netTotal * (float)0.09;
grandTotal4 = netTotal - (cgst4 + sgst4);
 

printf(" %s\t\t" ,item1);
printf(" %d\t\t" ,unitQuantity1);
printf(" %.2f\n" ,totalItem1);

printf(" %s\t\t" ,item2);
printf(" %d\t\t" ,unitQuantity2);
printf(" %.2f\n" ,totalItem2);

printf(" %s\t\t" ,item3);
printf(" %d\t\t" ,unitQuantity3);
printf(" %.2f\n" ,totalItem3);

printf(" %s\t\t" ,item4);
printf(" %d\t\t" ,unitQuantity4);
printf(" %.2f\n" ,totalItem4);




printf("--------------------------------------\n");

printf("Sub Total\t\t\t %.2f\n" ,subTotal);


printf("Discount @10%%  \t\t\t  %.2f\n" ,discount4);
printf("\t\t\t\t  -----\n");

printf("Net Total  \t\t\t  %.2f\n" ,netTotal);
printf("CGST @9%%  \t\t\t  %.2f\n" ,cgst4);
printf("SGST @9%%  \t\t\t  %.2f\n" ,sgst4);

printf("--------------------------------------\n");
printf("Grand Total  \t\t\t  %.2f\n" ,grandTotal4);
printf("--------------------------------------\n");

break;



case 5: //if five items

printf("Enter item 1:    ");
scanf(" %s" ,item1);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice1);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity1);
printf("\n\n");

printf("Enter item 2:    ");
scanf(" %s" ,item2);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice2);
printf("\n");
printf("Enter the quantity:    ");
scanf("%d" ,&unitQuantity2);
printf("\n\n");


printf("Enter item 3 :    ");
scanf(" %s" ,item3);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice3);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity3);
printf("\n\n");

printf("Enter item 4:    ");
scanf(" %s" ,item4);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice4);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity4);
printf("\n\n");

printf("Enter item 5:    ");
scanf(" %s" ,item5);
printf("\n");
printf("Enter the unit price:    ");
scanf(" %f" ,&unitPrice5);
printf("\n");
printf("Enter the quantity:    ");
scanf(" %d" ,&unitQuantity5);
printf("\n\n");

//------------THE INVOICE SECTION------------

printf("           -----CAMOTRON--------\n");
printf("           ---------------------\n\n");

printf(" Date: 25 July 2024\n");
printf(" Invoice To: %s\n" ,customerName);// | 
printf("--------------------------------------\n"); // 38 dashes
printf(" Items\t\tQty\t\tTotal\n\n");
printf("--------------------------------------\n\n");

// -----CALCULATIONS-----

 totalItem1 = unitPrice1 * unitQuantity1;  // item 1 total
 totalItem2 = unitPrice2 * unitQuantity2;
 totalItem3 = unitPrice3 * unitQuantity3;
 totalItem4 = unitPrice4 * unitQuantity4;
 totalItem5 = unitPrice5 * unitQuantity5;
 subTotal = totalItem1 + totalItem2 + totalItem3 + totalItem4 + totalItem5;

float discount5 = subTotal * (float)0.10; //keep "(float)" before a number that is to be divided, to avoid dividing integers.
netTotal = subTotal - discount5;
float cgst5 = netTotal * (float)0.09;
float sgst5 = netTotal * (float)0.09;
grandTotal5 = netTotal - (cgst5 + sgst5);
 

printf(" %s\t\t" ,item1);
printf(" %d\t\t" ,unitQuantity1);
printf(" %.2f\n" ,totalItem1);

printf(" %s\t\t" ,item2);
printf(" %d\t\t" ,unitQuantity2);
printf(" %.2f\n" ,totalItem2);

printf(" %s\t\t" ,item3);
printf(" %d\t\t" ,unitQuantity3);
printf(" %.2f\n" ,totalItem3);

printf(" %s\t\t" ,item4);
printf(" %d\t\t" ,unitQuantity4);
printf(" %.2f\n" ,totalItem4);

printf(" %s\t\t" ,item5);
printf(" %d\t\t" ,unitQuantity5);
printf(" %.2f\n" ,totalItem5);


printf("--------------------------------------\n");

printf("Sub Total\t\t\t %.2f\n" ,subTotal);


printf("Discount @10%%  \t\t\t  %.2f\n" ,discount5);
printf("\t\t\t\t  -----\n");

printf("Net Total  \t\t\t  %.2f\n" ,netTotal);
printf("CGST @9%%  \t\t\t  %.2f\n" ,cgst5);
printf("SGST @9%%  \t\t\t  %.2f\n" ,sgst5);

printf("--------------------------------------\n");
printf("Grand Total  \t\t\t  %.2f\n" ,grandTotal5);
printf("--------------------------------------\n");


break;           // for case 1; if there is a case 1 :( 

} //switch statement main

printf("\n\nDo you want to perform this operation again? Press 1, to exit press 0: ");
scanf(" %d" ,&choice);

printf("\n");

while( choice != 1 && choice != 0)
{
  printf("Invalid Input. Try Again: ");
  scanf(" %d" ,&choice);
}

printf("Thank you. Goodbye!\n");

} //while loop


    return 0;
} // main function