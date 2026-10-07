#include <stdio.h>
#include <stdlib.h>
void displayHeading();
int calculateTotal(int mark1, int mark2);
float calculateAverage(int total);
void displayResult(int total, float average);

int main()
{   int mark1,mark2,total;
    float average;

 displayHeading();

    printf("Enter the first test mark: ");
    scanf("%d", &mark1);
    printf("\nEnter the second test mark: ");
    scanf("%d", &mark2);

    total = calculateTotal(mark1,mark2);
    average = calculateAverage(total);

    displayResult(total, average);
return 0;
}
void displayHeading() {
    printf("====================================\n");
    printf("            STUDENT RESULT SYSTEM       \n");
    printf("====================================\n");
    }
    int calculateTotal(int mark1, int mark2){
    return mark1 + mark2;
    }
   float calculateAverage(int total) {
   return total / 2.0;
   }
   void displayResult(int total, float average) {
   printf("\nTotal mark : %d\n",total);
   printf("\nAverage mark : %.2f\n",average);

   if (average >= 50) {
    printf("\nResult: PASS\n");
   }
   else {
    printf("Result: FAIL\n");
   }
}
