#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[10],c;
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i] >=65&&str[i]<=90)
        {
                str[i]=str[i]+32;
        }
    }
     printf(" %s",str);
}