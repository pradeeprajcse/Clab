#include<stdio.h>
#include<stdlib.h>  
int addbyvalue(int a,int b)
{
    int res;
    res=a+b;
    return res;
}    
void swapbyReference(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }
int main()
{    
    int a,b,res;
    int*ptr;
    int*arr;
    int n,i,sum;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    ptr=&a;
    printf("\npointer demonstration:");
    printf("\nvalue of a=%d",*ptr);
    printf("address of ba =%p",(void*)ptr);
    res=addbyvalue(a,b);
    printf("\n\ncall by value:");
    printf("\nsum=%d",res);
    swapbyReference(&a,&b);
    printf("\n\ncall by reference:");
    printf("\n after swaping first number=%d",a);
    printf("\n after swaping second number=%d",b);
    printf("\n\ndynamic memory allocation");
    printf("\nenter the number of elements:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
    printf("memory allocation failed.");
    return 0;
    }
    printf("enter %d element:\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
     sum=sum+arr[i];
     }
     printf("sum of dynamically allocated array=%d",sum);
     free(arr);
     return 0;
     }       
    
