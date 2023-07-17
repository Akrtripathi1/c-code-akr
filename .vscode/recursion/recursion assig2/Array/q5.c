#include<stdio.h>
int main()
{
    int a[10],j,k=0,i;
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
}
j=a[0];

    for(i=1;i<=9;i++){
       if(a[i]<j)
      j=a[i];
    
    }
     printf("Smallest no is %d",j);
   
}