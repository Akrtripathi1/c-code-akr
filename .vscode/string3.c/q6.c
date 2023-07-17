#include<stdio.h>
int frequencey(char c[],char n)
{
    int i,flag=0;
    for(i=0;c[i];i++)
    {
        if(c[i]==n)
          flag++;
          
    }
    return flag;
}
int main()
{
    char str[20],n;
    int i,k;
    printf("Enter a string");
    fgets(str,20,stdin);
    printf("enter word you want to check");
    scanf("%c",&n);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    k=frequencey(str,n);
    printf("%d",k);
    return 0;
}