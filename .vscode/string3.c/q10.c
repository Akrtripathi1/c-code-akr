#include<stdio.h>
void concatenate(char c[],char b[])
{
    int i ,j,k,l,m=0;
    char d[100];
    printf("Enter first string");
    fgets(c,20,stdin);
    printf("Enter second string");
    fgets(b,20,stdin);
    for(i=0,j=0;c[i],b[j];j++,i++);
    c[i-1]='\0';
    b[j-1]='\0';
    for(i=0;c[i];i++)
    {
        d[m]=c[i];
        m++;
    }   
    k=m;
    // printf("%d",k);
     for(l=0;b[l];l++)
    {
        d[k-1]=b[l];
        k++;
         
    }
    d[k]='\0';
    printf("%s",d);
}
int main()
{
    char str[100],jkl[100];
    concatenate(str,jkl);
    return 0;
}