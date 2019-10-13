//herons formula 19ec063 28.8.19
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b,c;
	float S,A;
	printf("enter your 3 sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	S=(a+b+c)/2;
	A=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("the area od the traingle is%f",A);
	getch();
	return 0;
}

