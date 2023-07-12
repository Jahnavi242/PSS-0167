#include<stdio.h>
void main()
{
int num,x,t,sum=0;
printf("Enter a number:");
scanf("%d",&num);
t= num;
while(t!=0)
{
r=t%10;
sum=sum + r;
t=t/10;
}
if(num==sum)
{
printf ("%d is an palindrome Number.", num);
}
else
{
printf ("%d is not an palindrome Number.", num);
}
}
