#include<stdio.h>
void search_all_occurence(char *str,char ch,int*arr)
{
  int i,j,k=0;
  for(i=0;str[i];i++)
  {
    if(str[i]==ch)
    {
      arr[k]=i;
        k++;
    }
  }
   
   printf("%d",arr);

}
int main()
{
    int j;
    char jtr[]={"my name is akash tripathi"};
   
    
    int arr[100]={0};
  
  
    search_all_occurence(jtr,'a',arr);
    for(j=0;j<5;j++)
    printf(" %d ",arr[j]);
     
}