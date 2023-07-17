#include<stdio.h>
#include<string.h>
int main()
{
     int i,j,k;
     char str [10],newStr[10];
    printf("Enter a string");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';
    j=strlen(str)-1;
    // printf("%c",str[j]);
    for(i=j,k=0;i>=0;k++,i--)
       {
          newStr[k]=str[i];
         // printf("%c",str[i]);
         
       }
         printf("%d",strlen(newStr));
}