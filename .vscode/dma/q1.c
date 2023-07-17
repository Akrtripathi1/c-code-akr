#include<stdio.h>
#include<stdlib.h>
void input(int a)
{
    int i;
    char *p;
    p=(char*)calloc(a,sizeof(char));
    for(i=0;i<a;i++)
    scanf("%c",p+i);
     for(i=0;i<a;i++)
     printf("%c",*(p+i));
}
int main()
{
    int c;
    printf("Enter a size of string ");
    scanf("%d",&c);
    input(c);
    return 0;
}