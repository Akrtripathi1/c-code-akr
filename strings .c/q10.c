#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char c , str[10];
    printf("enter a string ");

    fgets(str,10,stdin);
    printf("Enter no first occurece no check");
    scanf("%c",&c);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
     {
        if(str[i]==c)
        break;
     }
     printf("%d",i);
}