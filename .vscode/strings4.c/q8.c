#include<stdio.h>
#include<string.h>
char * sort(char s[])
{
   int i,j;
   char t;
   for(i=0;i<=strlen(s)-1;i++)
   {
    for(j=0;j<=strlen(s)-1;j++)
    {
        if(s[j]>s[j+1])
        {
             t=s[j];
             s[j]=s[j+1];
             s[j+1]=t; 
        }
    }
   }
   return s;
}
int it_is_anagram(char s1[],char s2[])
{
   return strcmp(sort(s1),sort(s2))==0;
}
int main()
{
    char str[]="akash",jtr[]="hsaka";
    if(it_is_anagram(str,jtr))
     printf("it is anghram");
     else
     printf("it is not anghram");
     return 0;
}