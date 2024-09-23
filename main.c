#include <stdio.h>

int main(void) {
  char employee[30];
  int day;
  double hourSalary, incomeTax, grossSalary, finalSalary;
  
  printf("Enter the employee's name: ");
    scanf("%s", &employee);
  printf("Enter the number of working days: "); 
    scanf("%d",&day);
  printf("Enter the hourly rate: USD$ ");
      scanf("%lf",&hourSalary); 
  
        grossSalary = (hourSalary*8) * day;
        incomeTax = grossSalary * 0.08;
        finalSalary = grossSalary - incomeTax;
  
   printf("\nThe Income Tax discount is: USD$ %.2f\n",incomeTax);
   printf("The total net salary is USD$ %.2f\n",finalSalary);
  
  return 0;
}
