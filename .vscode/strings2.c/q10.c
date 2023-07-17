#include<stdio.h>
int alphanumeric(char c[])
{
    int i;
    
    for(i=0;c[i];i++)
    {
        if((c[i]>='A'&&c[i]<='Z' || c[i]>='a'&&c[i]<='z') ||(c[i]>='0'&&c[i]<='9')){
        printf("%s",c[i]);
           return 1;
        }
    }
    return -1;
}
int main()
{
    int i, k;
    char str[20];
    printf("Enter a string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    k=alphanumeric(str);
    if(k==1)
      printf("String is alphanumeric");
    else if(k==-1)
       printf("not");
}