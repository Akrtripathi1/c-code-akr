#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter a month number");
    scanf("%d",&a);
      switch(a)
      {
        case 1: printf(" month : January days :31 days");
        break;
        case 2:printf("month : Feburary days :28 days");
        break;
         case 3:printf("month : March days :31 days");
        break;
        case 4:printf("month : April days :30 days");
        break;
        case 5:printf("month : May days :31 days");
        break;
        case 6:printf("month : June days :30 days");
        break;
        case 7: printf("month : July days :31 days");
        break;
        case 8:printf("month : August days :31 days");
        break;
        case 9:printf("month : September days :30 days");
        break;
        case 10:printf("month : October days :31 days");
        break;
        case 11:printf("month : November days :30 days");
        break;
        case 12:printf("month : December days :31 days");
        break;
     
      }
}