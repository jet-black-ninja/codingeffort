//digts from numbers 19ec063 4.919
#include<stdio.h>
#include<conio.h>
int main(){
	int n,a,b,c,t;
	printf("enter your number\n");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	t=a+b+c;
	printf("the sun of the digits is %d\n",t );
	getch();
	return 0;
}