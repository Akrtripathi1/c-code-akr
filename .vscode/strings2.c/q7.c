#include<stdio.h>
int occurance(char c[],char d)
{
    int i;
    
    for(i=0;c[i];i++)
    {
        if(c[i]==d)
        return 1;
       
    }
    return -1;
}
int main()
{
    int k,i ;
    char str[20],j;
    printf("Enter a string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    printf("enter character you want a check");
    scanf("%c",&j);
   k=occurance(str,j);
   if(k==1)
   printf("occured");
   else
   printf("not occured");
}