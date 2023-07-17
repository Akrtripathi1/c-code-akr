#include<stdio.h>
int palidrome(char c[])
{
    int i,l,k,flag;
    char b[20];
    for(i=0;c[i];i++);
    c[i-1]='\0';
    l=i-2;
    for(i=l,k=0;i>=0;k++,i--)
    {
        b[k]=c[i];
    }
    b[k]='\0';
    for(i=0,k=0;b[k],c[i];k++,i++)
    {
        if(b[k]==c[i])
            flag=1;
            else 
            flag =0;
    }

    return flag;
} 
int main()
{
    int m,n,q;
    char str[20];
    fgets(str,20,stdin);
    n=palidrome(str);
    if(n==1)
    printf("String is pallindrome");
    else
    printf("not");
    return 0;

}