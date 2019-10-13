//area of circle 19ec063 28.8.19
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
int main(){
	int r;
	float A;
	printf("enter your radius");
	scanf("%d",&r);
	A=pi*pow(r,2);
	printf("the area is %f",A);
	getch();
	return 0;
}

