#include<stdio.h>
void sort(int *ptr,int size)
{
    int i,j,k;
    for(k=0;i<=size-1;k++){
    for(i=0;i<=size-1-k;i++)
    {
        if(ptr[i]>ptr[i+1])
        {
             j=ptr;
             ptr[i]=ptr[i+1];
             ptr[i+1]=j;
        }
    }
    }
}
