#include<stdio.h>
//Find out second minimum
int main()
{
   int n=7;
   int a[n];
   int min1,min2;
   min1=a[0];
   min2=a[1];
   int i;
      for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
   for(i=0;i<n;i++)
   if(min1>a[i])
   {
      min1=a[i];
   }
      for(i=0;i<n;i++)
if(a[i]>min1 && a[i]<min2)
{
   min2=a[i];
}
printf("%d",min2);

   return 0;
}
