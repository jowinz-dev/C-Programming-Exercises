#include <stdio.h>
#include <stdlib.h>

int main()
{ int length,width,area,perimeter;
    printf("Enter the length of the room in meters: ");
    scanf("%d", &length);
    printf("Enter the width of the room in meters: ");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\nThe area of the room is %d m^2\n",area);
    printf("\nThe perimeter of the room is %d m\n",perimeter);
}
