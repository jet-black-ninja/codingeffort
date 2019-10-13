// odd or even  19ec063 11.9.19
#include<stdio.h>
#include<conio.h>
int main(){
int y;
printf("enter your number");
scanf("%d",&y);
if(y%2==0)
	printf("%d is even",y);
else
	printf("%d is odd",y);
getch();
return 0;
}
