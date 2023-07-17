#include<stdio.h>
int main()
{
    char a,b,c;
    scanf("%c",&b);
    switch(b)
    {
     case 'A'...'Z': printf("%c is upper case letter",b);
     break;
     case 'a'...'z': printf(" %c is lower case letter",b);
     break;
     case '0'...'9':printf("digit");
     break;
     default:
     printf(" special character :");
     break;
    }
}