#include <stdio.h>
main()
{
int a, b, c;
printf("Enter A Value=");
scanf("%d", &a);
printf("Enter B Value=");
scanf("%d",&b);
c= a;
a = b;
b = c;
printf("Swap A variable =%d \nSecond variable =%d", a, b);
return 0;
}