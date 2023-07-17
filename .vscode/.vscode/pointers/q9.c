#include<stdio.h>
int order(int a[],int size)
{
    int left=0,
    right =size-1 ,t,
    loc=0;
  while(left<right)
  {
     while(left<right&&a[loc]<a[right])
       right--;
       if(left==right)
           break;
        else
        t=a[loc];
        a[loc]=a[right];
        a[right]=t;
        loc=right;
        while(left<right&&a[left]<a[loc])
        left++;
        if(left==right)
          break;
          else
          t=a[left];
          a[left]=a[loc];
          a[loc]=t;
          loc=left;

  }
  return loc;


}
int main()
{
    int i;
    int A[]={20,40,30,11,10,9,33,6};
    i=order(A,8);
    printf("i=%d\n",i);
    for(i=0;i<8;i++)
    printf(" %d ",A[i]);
    return 0;

}