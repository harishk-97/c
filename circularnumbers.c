int a,b,m=0;
  scanf("%d",&a);
  b=a;
  while(a>0)
  {
    a=a/10;
    m++;
  }
  int c[m],n,d,e[m],f=0;
  m--;
  n=m;
  while(b>0)
  {
    c[f]=b%10;
    b=b/10;
    f++;
  }
  for(int i=0;i<=n;i++)
  {
    int p=0;
    for(int j=0;j<=n;j++)
    {
      d=i-j;
      if(d<0)
      {
        d=d+n+1;
      }
      p=p*10+c[d];            
    }
    e[i]=p;
    printf("%d %d\n",p,i);
  }
