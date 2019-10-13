//upper to lowercase  19ec063 4.919
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d;
	printf("enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	c=a|b;
	d=a&b;
	printf("%d\n",c);
	printf("%d",d);
	getch();
	return 0;
}
