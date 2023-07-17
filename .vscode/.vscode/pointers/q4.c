#include<stdio.h>
#include<string.h>
char * lowercase(char * str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
             str[i]=str[i]+32;
    }
    return str;
}
int main()
{
    char jtr[30];
    char *ktr;
    fgets(jtr,30,stdin);
    jtr[strlen(jtr)-1]='\0';
    ktr=jtr;
    lowercase(ktr);
    printf("%s",jtr);
}