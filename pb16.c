#include<stdio.h>
#include<conio.h>
void main()
{
int num,r,sum=0,temp;
printf("enter a number");
scanf("%d",&num);
temp=num;
while(num!=0)
{
r=num%10;
num=num/10;
sum=sum+(r*r*r);
}
if(sum==temp)
{
printf("number is armstrong:%d",temp);
}
else
{
printf("not an armstrong number:%d",temp);
}
}
