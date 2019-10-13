//simple interest 19ec063 28.8.19
#include<stdio.h>
#include<conio.h>
int main(){
	float p,r,t,I;
	printf("enter principal, rate and time(in years) in order \n");
	scanf("%f%f%f",&p,&r,&t);
	I=(p*r*t)/100;
	printf("your interest will be%f",I);
	getch();
	return 0;
}

