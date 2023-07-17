#include<stdio.h>
#include<stdlib.h>
int *merge(int A[],int size1,int B[],int size2)
{
    int j,k,l;
    int *c;
    c=(int *)calloc(size1+size2,sizeof(int));
    for(j=0,k=0,l=0;j<size1&&l<size2;k++)
    {
        if(A[j]<B[l])
        {   
            c[k]=A[j];
            j++;
        }
        else
        {
            c[k]=B[l];
            l++;
        }
    }
    while(j<size1)
    {
            c[k]=A[j];
            j++;
            k++;
    }
     while(l<size1)
    {
            c[k]=B[l];
            l++;
            k++;
    }
    return c;

}
int main()
{
   int c[]={4,5,7,9,10};
      int d[]={3,6,8,11,12};
      int *p,i;
      p=merge(c,5,d,5);
      for(i=0;i<10;i++)
      {
        printf("%d",p[i]);
      }
}