#include<stdio.h>
void main()
{
int limit,i,j,temp;
int count=0;
count++;
printf("Enter the limit");
scanf("%d",&limit);
count++;
int a[limit];
printf("Enter the numbers");
for(i=0;i<limit;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
for(i=0;i<limit;i++)
{
count++;
for(j=0;j<limit;j++)
{
count++;
if(a[i]<a[j])
{
count++;
temp=a[i];
count++;
a[i]=a[j];
count++;
a[j]=temp;
count++;
}
count++;
}
count++;
}
count++;
printf("The sorted array is:");
for(i=0;i<limit;i++)
{
count++;
printf("%d\n",a[i]);
count++;
}
count++;
count+=2;
printf("\n Time Complexity is %d",count);
printf("\n Space Complexity is %d",20+4*limit);
}






