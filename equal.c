//equal 19ec063 28.8.19
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("enter your numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==b){
		printf("the numbers are equal");
	}
	else{
		printf("uneqal numbers");
	}
	getch();
	return 0;
}