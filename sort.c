#include<stdio.h>
main()
{
int a[10],n,i,j,c;
printf("\n enter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the value:");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
c=a[j];
a[j]=a[j+1];
a[j+1]=c;
}
}
}
for(i=0;i<n;i++)
{
printf("\n the shorted array is:%d",a[i]);
}
return 0;
}
