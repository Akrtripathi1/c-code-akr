#include<stdio.h>
int highest_marks(int **p,int n,int size[])
{
     int i,max,j;
     max=p[0][0];
     for(i=0;i<n;i++)
     {
        for(j=0;j<size[i];j++)
        {
            if(max<p[i][j])
            {
                max=p[i][j];
            }
        }
     }
     return max;
}
int main()
{
    int A[]={81,90,88,77,66,55,44,33,22,11};
    int B[]={13,14,15,19};
    int C[]={77,72,73,45,47};
    int D[]={34,4,44,45,49,65};
    int E[]={90,45,56,67,78,89,99,};
    int *p[5],size[]={10,4,5,6,7};
    int marks;
    p[0]=A;
    p[1]=B;
    p[2]=C;
    p[3]=D;
    p[4]=E;
   marks=highest_marks(p,5,size);
   printf("Highest marks is %d",marks); 
}