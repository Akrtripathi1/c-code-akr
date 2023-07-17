#include<stdio.h>
#include<string.h>
void store_word_with_s(char c[][30],char d[40],char ch)
{
int i,j,k;
for(i=0,j=0,k=0;d[i];i++,k++)
{
    if(d[i]!=' ')
        c[j][k]=d[i];
    else
    {
    if(c[j][0]!=ch)
     c[j][0]='\0';
      else
      c[j][k]='\0';
      j++;
      k=-1;
    }
}
if(c[j][0]!=ch)
    c[j][0]='\0';
    else
    c[j][k]='\0';
}
void f()
{
    char d,str[40]={"akash is a having letters and"};
      char jtr[7][30];
     int i;
        store_word_with_s(jtr,str,'a');
        for(i=0;i<7;i++)
            printf("%s\n",jtr[i]);
}
int main()
{
    f();
    printf("\n");
}