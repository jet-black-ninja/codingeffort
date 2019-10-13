//average of 5 numbers 19ec063 28.8.19
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d,e;
	float M;
	printf("enters your 5 numbers");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	M=(a+b+c+d+e)/5;
	printf("the mean of 5 numbers is %f",M);
	getch();
	return 0;
}