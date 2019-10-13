// check if prime     19ec063   9.10.19     
#include<stdio.h>
#include<conio.h>
int main(){
int i,n,s=0;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<n;i++){
	if(n%i==0)
		s=s+1;
		
	}	
	if(s>0)
		printf("number is no prime");
	else
		printf("number is  prime");
	getch();
	return 0;
	
}
