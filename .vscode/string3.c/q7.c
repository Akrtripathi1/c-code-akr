#include<stdio.h>
int find_word(char b[],char n)
{
    int i;
    for(i=0;b[i];i++)
    {
        if(b[i]==n)
           return i;
    }
    return 0;
}
int main()
{
    int k,j;
    char str[20],m;
    printf("Enter a String ");
    fgets(str,20,stdin);
    printf("Enter word you want a check ");
    scanf("%c",&m);
    for(j=0;str[j];j++);
    str[j-1]='\0';
    k=find_word(str,m);
    if(k>=0)
    printf("%c comes first at %d",m,k);
    else
    printf("it is not present ");
   return 0;
}