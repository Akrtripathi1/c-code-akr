#include<stdio.h>
void space(char c[])
{
    int i,k,count;
    fgets(c,20,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    for(i=0,k=1;i<=c[i-1];i++,k++)
    {
        if(c[i]==' ')
        {
            count++;
        }
        else
        {
        c[i-count]=c[i];
        
        } 

    }
 printf("%s",c);

}
int main()
{
    char str[30];
    space(str);
    return 0;
}