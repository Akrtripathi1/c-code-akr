#include<stdio.h>
#include<math.h>
struct time
{
int hour;
int min;
int sec;
};
struct time time_differnce(struct time c,struct time d)
{
    struct time t;
   int second =abs((c.hour*3600+c.min*60+c.sec)-(d.hour*3600+d.min*60+d.sec));
    t.hour=second/3600;
    second=second%3600;
    t.min=second/60;
    t.sec=second%60;
  return t;
}
int  main()
{
    struct time b1,b2,i;
     
    printf("Enter Start time hour");
    scanf("%d",&b1.hour);
     printf("Enter Start time min");
     scanf("%d",&b1.min);
      printf("Enter Start time min");
     scanf("%d",&b1.sec);
     printf("Enter end time hour");
    scanf("%d",&b2.hour);
    printf("Enter end time min");
    scanf("%d",&b2.min);
     printf("Enter end time sec");
      scanf("%d",&b2.sec);
   i= time_differnce(b1,b2);
    printf("%d:%d:%d",i.hour,i.min,i.sec);
}