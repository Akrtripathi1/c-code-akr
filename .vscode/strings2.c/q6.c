#include<stdio.h>
void vowels(char c[])
{
    int j,count=0;
    char a,e,i,o,u;
    fgets(c,10,stdin);
    for(i=0;c[j];j++);
     c[j-1]='\0';
     for(j=0;c[j];j++)
     {
        if(c[j]=='a'||c[j]=='e'||c[j]=='i'||c[j]=='o'||c[j]=='u')
            count++;
     }
   printf("no of vowels in string %s is %d",c,count);
}
int main()
{
    char str[20];
    vowels(str);
    return 0;
}