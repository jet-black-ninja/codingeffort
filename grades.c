// grades of a student 19ec063 25.9.19
#include<stdio.h>
#include<conio.h>
main(){
	int x;
	printf("enter your grades\n");
	scanf("%d\n",&x);
	if(x>=75)
		printf("distinction");
	else if(x<74.9 && x>=60)
		printf("I division");
	else if(x<59.9 && x>=50)
		printf("II division");
	else if(x<59.9 && x>=40)
		printf("III division");
	else
		printf("fail");
	getch();
}
