#include<stdio.h>

 int n,s,nr,nt,i,ns=0,x;

  int reverse(int a)

   {
     int s=0,r;
     while(a!=0)
     {
        r=a%10;
        s=(s*10)+r;
        a=a/10;      

    } 
    return s;
  
    }
 int pal(int b)
  {
    if(b==n)
      return 1;
    else
      {
        return 0;
     }
  }

 int main()
{
  scanf("%d",&nt);
  scanf("%d",&n);
  for(i=1;i<nt;i++)
  {
  scanf("%d",&n);
  ns=0;
  x=n;
  while(!pal(x))
  {
    nr=reverse(x);
    s=s+nr;
     ns++;
    
   }
  printf("%d%d\n",ns,s);
  
  } 
  }   

