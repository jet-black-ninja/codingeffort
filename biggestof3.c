//biggest of the 3 19ec063 4.919
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("enter your 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	(a<b && a<c)?printf("as is the smallest\n"):(b<a && b<c)?printf("b is the smallest\n"):printf("c is the smallest\n");
	getch();
	return 0;
}