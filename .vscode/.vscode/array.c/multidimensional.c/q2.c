#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],i,j,k,l,c[1][1],m,n;

   for(k=0;k<=1;k++){
    for(l=0;l<=1;l++){
        scanf("%d",&b[k][l]);
       
    }
   }
   for(i=0;i<=1;i++){
    for(j=0;j<=1;j++){
        scanf("%d",&a[i][j]);
    }
   }
  
   for(m=0;m<=1;m++){
    for(n=0;n<=1;n++){
        c[m][n] += a[m][n] * b[m][n];
     
        printf("%d%d%d\n",c[m][n],a[m][n],b[m][n]);
    }
    }
   }

