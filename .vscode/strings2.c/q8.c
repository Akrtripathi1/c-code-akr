#include<stdio.h>
void character(char c[],int n,int m)
{
    int i;
    fgets(c,10,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    for(i=n;i<=m;i++)
    {
        printf("%c",c[i]);
    }
}
int main()
{
    char str[20];
    character(str,0,4);
    return 0;
}