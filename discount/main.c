#include <stdio.h>
#include <stdlib.h>

int main()
{  int choice,quantity=0;
   double cost,total_amount=0.0,bill,discount;
   printf("\n-------------DELICIOUS FOODS AT HOIMA RESORT HOTEL--------------------------------\n");
   while(1){
    printf("\n=====================MENU=================================================================\n");
    printf("\n1.chicken biryani at UGX 25000.\n");
    printf("\n2.chicken pizza at UGX 35000.\n");
    printf("\n3.chicken & chips at UGX 20000.\n");
    printf("\n4.Egg biryani at UGX 20000.\n");
    printf("\n5.chicken 65 at UGX 45000.\n");
    printf("\n6.Fish fillet at UGX 35000.\n");
    printf("\n7.Exit and display menu summary\n");
    printf("\nDiscount applies if you buy more than for plates\n");
   printf("\n======================================================================================\n");

    printf("\nEnter your choice 1-7:");
    scanf("%d", &choice);

    if(choice == 7) {
        break;
    }
    else if (choice <1 || choice >6){
        printf("Invalid choice entered please choose between 1-6.\n");
        continue;
    }

    printf("\nEnter the quantity: ");
    scanf("%d", &quantity);
    if (quantity <1){
        printf("Invalid quantity , please enter a positive value.\n");
        continue ;
    }
    else if (quantity >4){
        discount= 5000.00;
        printf("Discount applied (- UGX 5000.00)");
    }

    switch (choice){
    case 1:
        bill=(quantity * 25000)-discount;
        break;
    case 2:
        bill=(quantity * 35000)-discount;
        break;
    case 3:
        bill=(quantity * 20000)-discount;
        break;
    case 4:
        bill=(quantity * 20000)-discount;
        break;
    case 5:
        bill=(quantity * 45000)-discount;
        break;
    case 6:
        bill=(quantity * 35000) -discount;
        break;
    }
    printf("total bill : %.2f\n",bill);

    quantity++;
    total_amount  +=bill;
   }
    printf("\n======================================================\n");
    printf("\n........MENU SUMMARY HERE PLEASE.............\n");
    printf("Quantity : %d \n",quantity);
    printf("Total bill : %.2f\n",total_amount);
    printf("\nThank You For choosing us,hope you enjoyed our services.\n");
    printf("\n======================================================\n");

    return 0;
}
