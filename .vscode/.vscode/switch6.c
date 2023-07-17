#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("\nEnter marks"); 
    scanf("%d",&a);    
  
     switch(a/10)
     {
        default:
        (a<=0)?printf("invalid"):printf("Grade F");
        break;

       
      case 10: 
            printf("invalid");
      break;
      case 9:
      printf("Grade A");
      break;
      case 8:
           printf("Grade B");
           break;
     case 7: 
        printf("Grade C");
        break;
     case 6: 
       printf(" Grade D");
        break;
    case 5: 
       printf("Grade E");
        break;
        
}     
}