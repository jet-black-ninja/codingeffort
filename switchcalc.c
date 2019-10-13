// switch calculator 19ec063 25.9.19
#include<stdio.h>
#include<conio.h>
main(){
	int x,y,c;
	printf("enter your numbers\n");
	scanf("%d%d",&x,&y);
	printf("1:addition\n2:substraction\n3:multiplication\n4:division\n");
	scanf("%d",&c);
	switch(c){
		case 1:
		printf("%d",x+y);
		break;
		case 2:
		printf("%d",x-y);
		break;
		case 3:
		printf("%d",x*y);
		break;
		case 4:
		printf("%d",x%y);
		break;
		default:
		printf("invalid option");
		break;
	}
	getch();
}