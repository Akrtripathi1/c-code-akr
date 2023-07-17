#include<stdio.h>
#include<string.h>
void duplicate(char c[][100],int n)
{
    int j,i,k;
    char d[4][100];
    d[1][1]='\0';
    for(i=0;i<n;i++)
    {
        fgets(c[i],100,stdin);
        c[i][strlen(c[i])-1]='\0';
    }
    for(i=0,k=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(c[k],c[j+1])==0)
            {
                strcpy(c[j+1],d[1]);
                k++;
            }
            
        }
        k++;
      
        
    }
    printf("After removing duplicate string : ");
    for(i=0;i<=3;i++)
    {
        printf("%s\n",c[i]);
    }
}
int main()
{
    int i;
    char str[4][100];
    duplicate(str,4);
    
    return 0;
}
