#include<stdio.h>
void case_Sensetive(char c[],char b[])
{
    int i,j;
    fgets(c,10,stdin);
    fgets(b,10,stdin);
    for(i=0;c[i];i++);
    c[i-1]='\0';
    b[i-1]='\0';
    for(i=0,j=0;c[i],b[j];j++,i++)
    {
       
        
            if(c[i]==b[j]||c[i]+32==b[j]||c[i]==b[j]-32 || c[i]-32==b[j]|| c[i]==b[j]+32)
            {
                printf("String match");
            }
             else
                  printf("string does not matches");
            
        
    }
}
int main()
{
    char str[20],jkl[20];
    case_Sensetive(str,jkl);
    return 0;
}