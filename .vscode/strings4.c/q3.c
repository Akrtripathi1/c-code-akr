#include<stdio.h>
#include<string.h>
void sort(char c[][20],int n)
{
   int i,j,k=0,l;
   char b[20];
   printf("Enter 10 cities name :");
   for(i=0;i<n;i++)
    {
    fgets(c[i],20,stdin);
    c[i][strlen(c[i])-1]='\0';
    }
    
   for(j=0;j<n;j++)
    {
        for(k=0;k<n-1;k++)
        {
        if(strcmp(c[k],c[k+1])>0)
        {
            
           strcpy(b,c[k]);
           strcpy(c[k],c[k+1]);
           strcpy(c[k+1],b);
          
        }
        }
    }
}
int main()
{
    int i;
    char str[10][20];
    sort(str,10);
    for(i=0;i<10;i++)
    printf("All cities name in sorted form is :\n");
    printf(" \n%s ",str[i]);
    return 0;
}