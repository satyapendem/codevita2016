#include<stdio.h>

int main()

{

int n,i,d;
long int num,rev,temp;

scanf("%d",&n);

while(n--)
{
scanf("%ld",&num);
temp=num;
rev=0;
i=0;
while(i<1000){
while(temp>0)
{ 
d=temp%10;
rev=rev*10+d;
temp=temp/10;

}
if(rev==num){
printf("%d %ld\n",i,num);
break;
}

num=num+rev;
temp=num;
rev=0;

i++;
}

}
return 0;
}
