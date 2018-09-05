#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n,t=0,a,b;
scanf("%d",&n);
b=n;
do
{
a=b%10;
t=t+pow(a,2);
b=b/10;
}
while(b%10!=0);
printf("%d",t);
getch();
}
