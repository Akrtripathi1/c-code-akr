#include<stdio.h>
#include<string.h>
int vowels(char c[][20],int n)
{
  int flag=0,l,j;
 
   for(l=0;l<n;l++)
   {
   fgets(c[l],20,stdin);
      c[l][strlen(c)-1]='\0';
   }
   for(l=0; l<n;l++)
   {
       for(j=0;j<20;j++)
        {
            if(c[l][j]=='a'||c[l][j]=='e'||c[l][j]=='i'||c[l][j]=='o'||c[l][j]=='u')
            {
                flag++;
            }
          
        }
   }
   return flag;
}
int main()
{
    char str[3][20];
    int k;
    k=vowels(str,3);
   
    printf("string coontains vowels is %d",k);
    return 0;
    
    
}