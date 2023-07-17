#include<stdio.h>
int string_length(char c[])
{
     int i,count;
    for(i=0;c[i];i++);
      c[i-1]='\0';
     for(i=0;c[i];i++);
     return i;
}
int main()
{
    int k;
    char str[10];
    fgets(str,10,stdin);
    k=string_length(str);
    printf("length of string is %d",k);
    return 0;

}