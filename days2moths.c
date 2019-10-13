//days to months 19ec063 4.919
#include<stdio.h>
#include<conio.h>
int main(){
	int d,m,a;
	printf("no. of days");
	scanf("%d",&d);
	m=d/30;
	a=d%30;
	printf("you have %d months and %d days",m,a);
	getch();
	return 0;
}