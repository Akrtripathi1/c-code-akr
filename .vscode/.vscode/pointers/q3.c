#include<stdio.h>
#include<string.h>
void uppercase( char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    }

}
int main()
{
    char jtr[30];
    fgets(jtr,30,stdin);
   jtr[ strlen(jtr)-1]='\0';
    char *ktr;
    ktr=jtr;
    printf("%s\n",jtr);
    uppercase(ktr);
    printf("%s\n",ktr);
}