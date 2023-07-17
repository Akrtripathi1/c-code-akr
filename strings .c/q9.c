#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s1[19],s2[19];
    fgets(s1,19,stdin);
     strcpy(s2,s1);
     printf("%s",s2);
}