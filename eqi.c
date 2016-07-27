#include<stdio.h>

int main()
{
 int a[10000],index=0,i,n;
  int k,j,fl=0;
  
   scanf("%d",&n);
  
  for(i=0;i<n;i++)
     {
   scanf("%d",&a[i]);
     index++;
    }
  n=index;
 for(i=0;i<n;i++){
  if(i==0){}
  else a[i]+=a[i-1];
 }
 for(i=0;i<n;i++){
  for(j=i+2;j<n-2;j++){
    if(a[i]==a[j]-a[i+1] && a[j]-a[i+1]==a[n-1]-a[j+1]){
     printf("{ %d,%d }\n",i+1,j+1);
     printf("{ 0,%d },{ %d,%d },{ %d,%d }\n",i,i+2,j,j+2,n-1);
     fl=1;
    }
  }
 }
 if(fl==0){
  printf("Array does not contain any equi pair\n");
 }
 return 0;
}
