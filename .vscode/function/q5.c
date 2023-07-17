#include<stdio.h>
void odd(int );
int main()
{
   int k,d,e;
   printf("Enter value of n:");
   scanf("%d",&d);
    odd(d);
    return 0;
}
void odd(int a)
{
  int i=1 ,j;
  while(i<=a)
 {
      if(i%2!=0){
      j=i;
      printf("%d",j);
      }
      else 
      printf("\n");
      i++;
 }
}