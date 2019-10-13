// series sum 1     19ec063   9.10.19     
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i,x,n,s=0;
	printf("enter your number\n");
	scanf("%d",&x);
	printf("enter maximum power\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
s=s+(pow(-1,i)*pow(x,i));
	}
	printf("%d is sum of series",s);
	getch();
	return 0;
}
