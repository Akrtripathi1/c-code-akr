#include<stdio.h>
void acronym(char c[])
{
    int i,j=0,k,l,m,g=0;
    char b[100],d[100];
    printf("Enter a string ");
    fgets(c,100,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    m=i-2;
    for(i=m;i>=0;i--)
    {
        if(c[i]==' ')
        {
            k=i;
          for (int n = i+1;  n<= m; n++)
          {
            /* code */
             b[j]=c[n]; 
            j++;
            
          }
          
         break;
        
        }
       
    }
       // printf("%s",b);
   
    for(i=0;i<k;i++)
    {
        //printf("%d",k);
        if(i==0){
         d[g]=c[i];
      
         g++;}
        else if(c[i]==' '){
          d[g]=c[i+1];
        
          g++;
        }
   l=g;
  
    }
     for(j=0;b[j];j++){
       d[l]=b[j];
        //printf("%c",b[j]);
       l++;
      
     }
       d[l]='\0';
        printf("%s",d);
       

}
int main()
{
    char str[100];
    acronym(str);
    return 0;
}