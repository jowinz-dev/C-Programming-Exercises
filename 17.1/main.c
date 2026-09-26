#include <stdio.h>
#include <stdlib.h>

int main()
{   double c,a,b;
        printf("Enter the hypotenuse: ");
        scanf("%lf", &c);
        printf("Enter the side a: ");
        scanf("%lf", &a);

         b=  sqrt(pow(c,2) - pow(a,2));

        printf("\nThe missing side b = %.0f\n",b);

    return 0;
}
