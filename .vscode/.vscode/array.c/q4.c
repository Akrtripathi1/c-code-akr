#include <stdio.h>
void rotation(int a[],int dir,int size,int shift_count)
{
    int i,temp, j;
  
    if(dir==1)
    {
        while(shift_count)
        {
            temp=a[size-1];
            for(i=size-2;i>=0;i--)
               a[i+1]=a[i];
                    a[0]=temp;
            
            shift_count --;
        }
       
    }
    else
    {
        while(shift_count)
        {
           temp=a[0];
            for(i=1;i<=size-1;i++)    
                    a[i-1]=a[i];
           a[size-1]=temp;
          
            shift_count --;
        }
        
    }
    
}