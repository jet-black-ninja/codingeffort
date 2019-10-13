//percentage 19ec063 4.919
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d,e;
	float p;
	printf("enter yout marks out of hundred\n");
	scanf("%d%d%d%d%d\n",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5;
	printf("your percentage is%f\n",p);
	getch();
	return 0;
}


