#include<stdio.h>
void reverse(char c[])
{
    int i,l,n,j,k;
    char b[20];
    fgets(c,20,stdin);
     for(i=0;c[i];i++);
     c[i-1]='\0';
     l=i-2;
     for(i=l;i>=0;i--)
     {
        if(c[i]==' '||i==-1)
        {
            for(j=i+1,n=0;c[j];n++,j++)
                b[n]=c[j];
                i=i-1;
               
        }
       
        
    }
     b[n]='\0';
     printf("%s",b);
     }
int main()
{
    char str[20];
    reverse(str);
    return 0;
}