Amazfit Stratos A1619 // area calc 19ec063 25.9.19
#include<stdio.h>
#include<conio.h>
main(){
	int c;
	printf("coose your figure\n");
	printf("1:circle\n2:square\n3:rectangle\n4:triangle\n");
	scanf("%d",&c);
	switch(c){
		case 1:
		int r;
		printf("input radius\n");
		scanf("%d",&r);
		printf("\n Area=%f",3.14*r*r);
		break;
		case 2:
		int a;
		printf("enter your side\n");
		scanf("%d",&a);
		printf("\nArea=%d",a*a);
		break;
		case 3:
		int l,y;
		printf("enter your length and breath\n");
		scanf("%d%d",&l,&y);
		printf("\nArea =%d",l*y);
		break;
		case 4:
		int b,h;
		printf("enter your base and height\n");
		scanf("%d%d",&b,&h);
		printf("\n area =%f",0.5*b*h);
		break;
		default:
		printf("\ninvalid");
		break;
	}
	getch();
}
