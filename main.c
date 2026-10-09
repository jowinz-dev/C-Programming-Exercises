#include <stdio.h>
#include <stdlib.h>
int findLarger(int num, int num1);
int main()
{  int num, num1,larger;
     printf("\nEter the first number: ");
    scanf("%d",&num);
    printf("\nEter the second number: ");
    scanf("%d",&num1);
    larger = findLarger(num,num1);

    printf("\nThe larger number is %d\n",larger);

    return 0;
}
int findLarger(int num, int num1){
    if(num>num1){
        return num;
    } else {
    return num1;
    }

}
