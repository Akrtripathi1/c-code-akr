#include<stdio.h>
#include<string.h>
int main()
{
    int j,count=0;
    char a,e,i,o,u ,str[10];
    printf("Enter string");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';
    for(j=0;str[j];j++)
    {
        if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
        {
        count=count+1;
        
        }
    }
    printf("The no of vowels in %s is %d",str,count);
      
}