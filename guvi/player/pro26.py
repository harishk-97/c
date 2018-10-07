#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
  int a,*b;
  scanf("%d",&a);
  b=malloc(a*sizeof(int));
  for(int i=0;i<a;i++)
  {
    scanf("%d",&b[i]);
  }
  int c[a];
  for(int i=0;i<a;i++)
  {
    int d=0,flag=0;
    for(int j=0;j<a;j++)
    {
      if(j>i && flag==0)
      {
        if(b[j]>b[i])
        {
        d++;
        }
        else
        {
         flag=1; 
        }
      }      
    }
    c[i]=d+1;
  }
  int f=c[0];
  for(int i=0;i<a;i++)
  {
    if(f<c[i])
    {
      f=c[i];
    }
  }
  printf("%d",f);
  return 0;
}
