#include<stdio.h>
#include<string.h>
void  character(char c[][30],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
    fgets(c[i],30,stdin);
   c[i][strlen(c[i])-1] ='\0';
    }
   
}
int main()
{
    int i;
    char str[3][30];
    character(str,3);
    for(i=0;i<3;i++)
      printf("%s",str[i]);
      printf("\n");
    return 0;
}
