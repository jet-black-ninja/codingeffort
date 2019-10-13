// vowel or not  19ec063 11.9.19
#include<stdio.h>
#include<conio.h>
int main(){
char x;
printf("enter your alphabet\n");
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	printf("%c is a vowel\n",x);
else
	printf("%c is a consonant\n",x );
getch();
return 0;
}
