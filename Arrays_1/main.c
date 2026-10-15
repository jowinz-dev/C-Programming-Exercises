#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prices[3] = {10.50f, 5.99f, 20.00f};

    // We want to change the SECOND item (5.99) to 7.50
    // Bug 2 is hiding in this index number
    prices[1] = 7.50f;

    // Print all 3 prices
    // Bug 3 is hiding in the loop condition
    for (int i = 0; i <3; i++) {
        printf("Item %d price: $ %.2f\n", i + 1, prices[i]);
    }

    return 0;
}
