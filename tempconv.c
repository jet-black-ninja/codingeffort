//temp from farenhite to celcius 19ec063 28.8.19
#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main(){
	float c,f;
	printf("enter your temp in farenhite");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("the temp in celcius is%f",c);
	getch();
	return 0;
}

	
	
