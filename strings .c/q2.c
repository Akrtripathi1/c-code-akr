#include<stdio.h>
#include<string.h>
int main()
{
    char c,str[10];
    int i,count=0;
    printf("Enter string");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter the character you want to check :");
    scanf("%c",&c);
    
       for(i=0;str[i];i++)
    {
        if(c==str[i])
        count++;
    }
  printf("no of times character %c is reapeated in string %s is %d",c,str,count);
}