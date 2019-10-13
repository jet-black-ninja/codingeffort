//upper to lowercase  19ec063 4.919
#include<stdio.h>
#include<conio.h>
int main(){
	char a;
	int b;
	printf("enter your alphabet\n");
	scanf("%c",&a);
	b=(int)a;
	b=b+32;
	printf("lower case %c",b);
	getch();
	return 0;
}