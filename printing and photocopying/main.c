#include <stdio.h>
#include <stdlib.h>

int main()
{  int choice,pages=0;
   float fee,total_cost,discount;

      printf("\n=========UCU PRINTING AND PHOTOCOPYING CENTRE===================\n");
    for (;;){
        printf("\n=============================================================\n");
        printf("\n1.photocopying in color (800/page)\n");
        printf("\n2.photocopying without color(400/page)\n");
        printf("\n3.printing in color (1000/page)\n");
        printf("\n4.Exit and Display Daily Summary\n");
        printf("\n=============================================================\n");
        printf("\nEnter choice 1-3: ");
        scanf("%d", &choice);
    if (choice ==4){
        break;
    }
    else if (choice<1 || choice >3){
        printf("Invalid choice please choose between 1 and 4");
        continue;
    }

    printf("\nEnter the pages: ");
    scanf("%d", &pages);

    if (pages<1){
        printf("\nInvalid page number entered, please enter positive values\n");
        continue;
    }
    else if (pages >25){
        discount =2000.00;
        printf("\ndiscount applied here(-UGX 2000.00)\n");
    }
    switch(choice){
case 1:
    fee = (pages * 800.00)- discount;
    break;
case 2:
    fee = (pages * 400.00) - discount;
    break;
case 3:
    fee= (pages * 1000.00) - discount;
    break;
    }
    printf("\nTotal cost: UGX %.2f\n",fee);

    total_cost +=fee;

    }
    printf("\n=============================================================\n");
    printf("\n                  Daily Summary                     \n");
    printf("\nTotal Cost : UGX %.2f\n",total_cost);
    printf("\n=============================================================\n");
    return 0;
}
