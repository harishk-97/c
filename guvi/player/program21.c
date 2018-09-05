#include <stdio.h>
int main(void) 
{
  int a,b,c,d,e,f;
  scanf("%d %d\n%d %d \n%d %d",&a,&b,&c,&d,&e,&f);
  if((a==e && e==c)||(b==d && d==f))
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
