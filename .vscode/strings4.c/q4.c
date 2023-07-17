#include<stdio.h>
#include<string.h>
void string_to_word(char[] ,char[][20]);
void function()
{
    char k[]="Akr enterprises private limited";
    char l[4][20];
    int i;
    string_to_word(k,l);
    for(i=0;i<=3;i++)
    {
        printf("%s\n",l[i]);
    }
}
void string_to_word(char str[],char jtr[][20])
{
  int i ,j ,k,count=0;
   for(i=0,j=0,k=0;str[i];i++,k++)
  {
    if(str[i]!=' ')
      jtr[j][k]=str[i];
   
      else
      {
      jtr[j][k]='\0';
      j++;
      k=-1;
      }
  }
  jtr[j][k]='\0';

}
int main()
{
    function();
    return 0;
}