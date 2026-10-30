#include<stdio.h>
#include<string.h>
int main    ()
{
char str1[50],str2[50],str3[100];
int res;
printf("enter the first string:");
scanf("%s",str1);
printf("enter the second string:");
scanf("%s", str2);
res=strlen(str1);
printf("\nLength of first =%d",res);
strcpy(str3,str1);
printf("\ncopid string=%s",str3);
res=strcmp(str1,str2);
res=strcmp(str1,str2);
if(res==0)
  printf("\nboth string are equal");
else
  printf("\nboth string are not equal");
 strcat(str1,str2);
 printf("\nconcantenated string=%s",str1);
 return 0; 
 }
