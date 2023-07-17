#include<stdio.h>
#include<string.h>
int main()
{
   int i,j=0,k=0,l=0;
   char str[10];
   fgets(str,10,stdin);
   str[strlen(str)-1]='\0';
   for(i=0;str[i];i++)
   {
    if((str[i]>=65 &&str[i]<=90)||(str[i]>=97&&str[i]<=122))
      j++;
      else if(str[i]>=48 && str[i]<=57)
        k++;
        else if(str[i]>=32 && str[i]<=47)
        l++;
   }
   printf("in strig %s alphabet sare %d digits are %d special character are %d ",str,j,k,l);
}