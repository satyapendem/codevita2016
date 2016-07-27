#include<stdio.h>
 
three_n(int n)
{
 
 int count=1;
 
   while(1)
    {

     if(n%2==0)
      {
        n=n/2;
       
      }

    else
     {
       n=(n*3)+1;
       
     }
 count++;
   if(n==1)
       break;
  }
  
 return count;
}
     
 int main()
 {
   
   int a,b,r,max=0,x,nt;
    
     scanf("%d",&nt);
     while(nt)
     {
     scanf("%d%d",&a,&b);
    for(x=a;x<=b;x++)
    {
      scanf("%d%d",&a,&b);
     r=three_n(x);
     if(r>max)
      max=r;
   }
   if(nt==1)
     break;
  }
  printf("%d\t%d\t%d",a,b,max);
   return 0;

  }       
