#include<stdio.h>
#include<string.h>
char frequencey(char str[][20],int n)
{
    int f[128]={0};
   int i,j,max, maxindex=0;
   for(i=0;i<n;i++)
   {
   for(j=0;str[i][j];j++)
         if(str[i][j]>0)
         f[str[i][j]]++;
   }
   max=f[0];
   for(i=1;i<=127;i++)
   if(max<f[i])
    {
        max =f[i];
        maxindex=i;
    }
    return maxindex;
}
int main()
{
    char k;
    char names[][20]={
        "Akash",
        "Ankita",
        "Anjane",
        "Digvijay"
    };
    k=frequencey(names,4);
 printf("Highest frequencey is %c",k);
}