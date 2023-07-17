#include<stdio.h>
int main()
{
    int i; 
    char str[20];
    printf("Enter string");
    fgets(str,20,stdin);

      for(i=0;str[i];i++);
          str[i-1]='\0';
    for(i=0;str[i];i++);
    printf("length of %s is %d",str,i);
}