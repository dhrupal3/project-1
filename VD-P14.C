
#include<stdio.h>
#include<conio.h>

main()
{
   int salary,hra,da,ta,total_salary;
   clrscr();
   printf("Enter Base Salary =");
   scanf("%d",&salary);
   printf("Enter HRA =");
   scanf("%d",&hra);
   printf("Enter DA =");
   scanf("%d",&da);
   printf("Enter TA =");
   scanf("%d",&ta);

   total_salary=salary+hra+da+ta;
   printf("Total Gross Salary =%d",total_salary);
   getch();
}