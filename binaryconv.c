// decimal to binary     19ec063   9.10.19     
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x,n,i,s=0;
	printf("enter your number");
	scanf("%d",&n);
	for(i=0;n!=0;i++){
		x=n%2;
		s=(x*pow(10,i))+s;
		printf("%d  ",s);
		n=n/2;
	}
	printf("%d is binary ",s);
	getch();
	return 0;
}