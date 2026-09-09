#include <stdio.h>
#include <stdlib.h>

int main()
{  char students_name[50];
   char student_access_number[50];
   printf("Enter student name: ");
   scanf("%s", &students_name);

   printf("Enter student access number: \n");
   scanf("%s", &student_access_number);

   printf("\nStudent: %s\n",students_name);
   printf("Access No: %s\n",student_access_number);


    return 0;
}
