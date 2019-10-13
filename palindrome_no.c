// sum of digits and palindrome     19ec063   9.10.19     
#include<stdio.h>
#include<conio.h>
int main(){
int i,n,x=0,s=0;
printf("enter your number\n");
scanf("%d",&n);
for(i=n;i!=0;i=i/10){
x=x+i%10;
}
printf("%d is sum of digits\n",x);
for(i=n;i!=0;i=i/10){
	s=(s*10)+(i%10);
}
if(n==s)
	printf("palindrome");
else
	printf("not palindrome");
getch();
return 0;
}