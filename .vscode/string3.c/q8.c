#include<stdio.h>
void uppercase(char c[])
{
    int i,j;
    char b[20];
    printf("Enter a string");
    fgets(c,20,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    for(i=0,j=0;c[i];j++,i++)
    {
        if(i==0)
          c[i]=c[i]-32;
           if(c[i]==' ')
                c[i+1]=c[i+1]-32;
        b[j]=c[i];
    }
    b[i]='\0';
    printf("%s",b);
}
int main()
{
    char str[20];
    uppercase(str);
    return 0;

}