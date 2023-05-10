#include<stdio.h>  
int main()   
{
   int f,c;
   clrscr();

   printf("Celsius=");
   scanf("%d",&c);
   f=c*9/5+32;
   printf("Celsius to Fahrenheit=%d",f);
   getch();
}  
