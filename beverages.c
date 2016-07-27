#include<stdio.h>
int readquant(int *a,int n)
{
 int i;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
}
int checksum(int a,int b,int c,int q)
{
 if(a+b+c==q)
 return 1;

 return 0;
}
int make(int *a,int q,int n)
{
 int i,j,k,fl=0;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(j!=i)
   {
    for(k=0;k<n;k++)
    {
     if(k!=i&&k!=j)
     {  
      if(checksum(a[i],a[j],a[k],q))
      {
       fl=1;
       return 1;
      }
     }
    }
   }
  }
 }
return 0;
}
main()
{
 int n,a[100],i,q;
 scanf("%d",&n);
 readquant(a,n);
 scanf("%d",&q);
 if(make(a,n,q))
 printf("true");
 else
 printf("false");
 return 0;
}
