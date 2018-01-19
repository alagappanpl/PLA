#include<stdio.h>
#include<math.h>
main()
{
int n,n1,reminder=0,sum=0;
scanf("%d",&n);
n1=n;
while(n>0)
{
rem=n%10;
sum=sum+pow(reminder,3);
n=n/10;
}
if(n1==sum)
printf("yes it is ARMSTRONG");
else
printf("no is not ARMSTRONG");
}
