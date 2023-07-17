#include <stdio.h>
int main() {
int a,b,p,i;
for(a=2;a<100;a++)
{
   p=0;
    for(i=2;i<a;i++) {
        if(a%i == 0){
          p++;
          
    }
  }
  if(p<1){
    printf("%d\n",a);
}
  

}

return 0;