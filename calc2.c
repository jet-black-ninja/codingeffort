// switch calculator 2  19ec063 25.9.19
#include<stdio.h>
#include<conio.h>
main(){
	int x,y,z,c;
	printf("enter your numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("1:total\n2:average\n3:smallest\n4:greatest\n");
	scanf("%d",&c);
	switch(c){
		case 1:
		printf("%f",(x+y+z));
		break;
		case 2:
		printf("%d",(x+y+z)/3);
		break;
		case 3:
		(x<y && x<z)?printf("%d is the smallest\n",z):(y<x && y<z)?printf("%d is the smallest\n",y):printf("%d is the smallest\n",z);
		break;
		case 4:
		(x>y && x>z)?printf("%d is the greatest\n",z):(y>x && y>z)?printf("%d is the greatest\n",y):printf("%d is the greatest\n",z);
		break;
		default:
		printf("invalid option");
		break;
	}
	getch();
}