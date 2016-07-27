#include<stdio.h>

 int n,s,r,nt,i;

  void reverse(int a)

   {
     int s=0,r;
     while(a!=0)
     {
        r=a%10;
        s=(s*10)+r;
        a=a/10;      

    } 
    pal(s);
  
    }
 void pal(int b)
  {
    if(b==n)
      printf("%d",n);
    else
      {
       n=n+b;
       reverse(n);
     }
  }

 int main()
{
  
  scanf("%d",&n);
  reverse(n);
  return 0;
  }   

