#include <stdio.h>
int main()
{
int a,b,choice,res;
printf("=====OPERATOR AND EXPRESSIONS=====\n");
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\n-----MENU-----\n");
printf("1. addtion\n");
printf("2.subrsction\n");
printf("3.multiplication\n");
printf("4.divission\n");
printf("5.moduls\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
res=a+b;
printf("Result=%d",res);
break;
case 2:
res=a-b;
printf("Result=%d",res);
break;
case 3:
res=a*b;
printf("Result=%d",res);
break;
case 4:
if(b!=0)
{
res=a/b;
printf("Result=%d",res);
}
else 
{
printf("division by zero is noy possible.");
}
break;
case 5:
if(b!=0)
{
res=a%b;
printf("result=%d",res);
}
else
{
printf("moduls by zero is not possible.");
}
break;
defult:
printf("Invalid choice.");
}
return 0;
}   
