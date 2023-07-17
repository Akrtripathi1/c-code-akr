#include<stdio.h>
void reverse_string(char c[] )
{
    int i,k,l;
      char j[20];
    for(i=0;c[i];i++);
    c[i-1]='\0';
   l= i-2;
     for(i=l,k=0;i>=0;k++,i--)
    {
       j[k]=c[i];
    }
    
  printf("Reverse of string %s is %s ",c,j);

}
int main()
{
    char str[10];
   fgets(str,10,stdin);
   reverse_string(str);
   return 0;
}