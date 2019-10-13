//flip a number 10ec063 28.8.19
#include<stdio.h>
#include<conio.h>
int main(){
	int n,a,b,c,d,f;
	printf("enter your 4 digit number");
	scanf("%d",&n);
	a=n%10;
	b=(n%100);
	b=(b-a);
	c=(n%1000);
	c=(c-n%100);
	d=(n%10000);
    d=(d-n%1000);
    f=a+b+c+d;
    printf("%d",f);
    getch();
    return 0;
}