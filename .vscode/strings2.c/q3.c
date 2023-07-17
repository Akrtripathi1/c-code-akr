#include<stdio.h>
int compare(char c[],char j[])
{
    int i,k;
    for(i=0,k=0;c[i],j[k];i++,k++);
       c[i-1]=='\0';
        j[i-1]='\0';
         for(i=0,k=0;c[i],j[k];i++,k++)
         {
            if(c[i]==j[k])
               return 1;
               else 
               return 0; 
         }
         
}
int main()
{
    int l;
    char str [20],jkl[20];
    fgets(jkl,20,stdin);
    fgets(str,20,stdin);
    l=compare(str,jkl);
    if(l==1)
    {
    printf("both are same");
    }
    else 
     printf("ma chuda");
    return 0;
}