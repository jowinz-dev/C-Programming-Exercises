#include <stdio.h>
#include <stdlib.h>

int main()
{   int mark_got;
    char A,B,C,D,E,F;
    printf("Enter the mark you got: ");
    scanf("%d", &mark_got);
    A = 'A';
    B = 'B';
    C = 'C';
    D = 'D';
    E = 'E';
    F = 'F';
    if (mark_got <= 100 &&mark_got >=80){
        printf("\nyou have got  an %c\n",A);
    }
     else if (mark_got<= 79 &&mark_got >=75){
       printf("\nYou have got a %c\n",B);
    }
    else if (mark_got<=74 &&mark_got >=65){
        printf("\nYou have got a %c\n",C);
    }
    else if (mark_got<=64 &&mark_got>=59){
        printf("\nYou have got a %c\n",D);
    }
    else if (mark_got<=58 &&mark_got>=45){
        printf("\nYou have got an %c\n",E);
    }
    else{
        printf("\nYou have got an %c\n",F);
    }




    return 0;
}
