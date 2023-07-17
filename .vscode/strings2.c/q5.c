#include<stdio.h>
void upper_case(char c[])
{
     int i;
    fgets(c,10,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    for(i=0;c[i];i++)
    {
        if(c[i]>=65&&c[i]<=90)
        {
            c[i]=c[i]+32;

        }

    }
    printf(" lower case %s",c);
}
int main()
{
    char str[20];
    upper_case(str);
}