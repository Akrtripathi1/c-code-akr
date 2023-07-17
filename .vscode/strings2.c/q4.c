#include<stdio.h>
void upper_case(char c[])
{
     int i;
    fgets(c,10,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    for(i=0;c[i];i++)
    {
        if(c[i]>=97&&c[i]<=122)
        {
            c[i]=c[i]-32;

        }

    }
    printf(" upper case %s",c);
}
int main()
{
    char str[20];
    upper_case(str);
}