#include<stdio.h>
void word(char c[])
{
    int i,count;
    fgets(c,20,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    for(i=0;c[i];i++)
    {
        if(c[i]!=' ')
         {
            count++;
         }
    }
    printf("no of words in string %s is %d",c,count);

}
int main()
{
    char str[20];
    word(str);
    return 0;
}