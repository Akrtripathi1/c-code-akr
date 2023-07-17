#include<stdio.h>
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
        arr3[k]=arr2[j];
        j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }

}
int main()
{
    int a[]={3,6,19,20,25};
     int b[]={10,12,33,40};
     int d[9],i;
     merge(a,5,b,4,d);
for(i=0;i<9;i++)
printf(" %d ",d[i]);
printf("\n");
return 0;
}