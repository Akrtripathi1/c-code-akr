#include<stdio.h>
#include<string.h>
void mails(char c[][60],int n,char pattern[])
{
    int i,j,k,count=0;
    char e[]={"gmail.com"};
    printf("Enter 10 mail ids : \n");
    for(i=0;i<n;i++)
    fgets(c[i],60,stdin);
  c[i][strlen(c[i])-1]='\0';
  k=strlen(pattern);
   for(j=0;c[j][i];)
   {
     for(i=0;c[j][i];i++)
    if(c[j][i]=='@'&&c[j][i+1]=='g'){
        count++;
        break;
    }
   j++;
   }

   
printf("no of gmail .com  ids are %d",count);
}
int main()
{
   char jtr[10][60];
  char pattern[]={"@gmail.com"};
   mails(jtr,3,pattern);
   
   
}