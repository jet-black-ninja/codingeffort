// electricity bill 19ec063 25.9.19
#include<stdio.h>
#include<conio.h>
main(){
	int x,y,z;
	float b;
	printf("enter your current reading and previous reading\n");
	scanf("%d%d",&z,&y);
	x=z-y;
	if(x>=600){
		b=380+(x-600)*1;
		printf("your bill is %f",b);
	}
	else if(x>=401 && x<600){
		b=230+(x-400)*0.75;
		printf("your bill is %f",b);
	}
	else if(x>=201 && x<400){
		b=100+(x-200)*0.65;
		printf("your bill is %f",b);
	}
	else {
		b=x*(1/2);
		printf("your bill is %f",b);
	}
	getch();
}
	
