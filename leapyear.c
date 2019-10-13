// leap year  19ec063 11.9.19
#include<stdio.h>
#include<conio.h>
int main(){
int y;
printf("enter your year \n");
scanf("%d",&y);
if ((y%4==0 && y%100!=0)||(y%400==0))
	printf("%d is a leap year\n",y);
else 
	printf("%d is not a leap year\n",y);
getch();
return 0;
}
