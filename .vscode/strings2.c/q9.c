#include<stdio.h>
void swap(char c[],char b[])
{
    int i,j;
    char d;
    fgets(c,10,stdin);
    fgets(b,10,stdin);
    for(i=0;b[i],c[i];i++);
      b[i-1]='\0';
      c[i-1]='\0';
      for(i=0;c[i],b[i];i++)
      {
         d=c[i];
         c[i]=b[i];
         b[i]=d;
      }
      printf("%s and %s",c,b);
}
int main()
{
   char jkl[20],str[20];
   swap(str,jkl);
   return 0;
}