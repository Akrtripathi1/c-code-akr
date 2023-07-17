#include<stdio.h>
void extract_string(char *str,int start_index,int end_index,char *result)
{
       int i,k=0;
       for(i=start_index,k=0;i<=end_index;i++)
       {
        result[k]=str[i];
        k++;
       }
       result[k]='\0';

}