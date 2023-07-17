#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[10],c,d;
    fgets(str,10,stdin);
    c=' ';
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
        count++;
        }
    }
    printf("The space between string %s is  %d",str,count);
}