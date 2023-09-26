#include <stdio.h>
void main()
{
int lim,i,count=0,flag=0;
count=count+2;
printf("Enter the limit");
scanf("%d",&lim);
count++;
printf("Enter the numbers");
int a[lim];
for(i=0;i<lim;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
int search;
printf("Enter the value to be searched");
scanf("%d",&search);
count++;
for(i=0;i<lim;i++)
{
count++;
if(a[i]==search)
{
count++;
flag++;
count++;
}
}
if(flag==1)
{
count++;
printf("The number is present\n");
}
else
{
count++;
printf("The number is not present\n");
}
count++;
printf("\nTime Complexity is %d",count);
printf("\nSpace Complexity is %d",20+lim*4);
}


