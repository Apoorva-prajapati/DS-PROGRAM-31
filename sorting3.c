#include<stdio.h>
main()
{
 int a[100],i,j,n,key;
 printf("Enter number of elements");
 scanf("%d",&n);
 printf("Enter elements of array");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=1;i<=n-1;i++)
 {
 key=a[i];
 j=i-1;
 while(j>=0&&a[j]>key)
 {
 a[j+1]=a[j];
 j=j-1;
 }
 a[j+1]=key;
 }
 for(i=0;i<n;i++)
 {
 printf("%d",a[i]);
 }
}

