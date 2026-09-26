#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trips_taken,trans_budget,trans_fare,trans_balance,trans_total;

    printf("Enter the transport budget (UGX): ");
    scanf("%d", &trans_budget);

    printf("Enter the transport fare for one trip (UGX) : ");
    scanf("%d", &trans_fare);

    printf("Enter the number of trips: ");
    scanf("%d", &trips_taken);

    trans_total = trans_fare * trips_taken;
    trans_balance = trans_budget - trans_total;

    printf("\nTransport budget   is     : UGX %d\n",trans_budget);

    printf("Transport total cost is   : UGX %d\n",trans_total);

    printf("The remaining balance is  : UGX %d\n",trans_balance);

    printf(" \nThank you for using my program! \n");
    return 0;
}
