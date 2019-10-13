// switch vowel 19ec063 25.9.19
#include<stdio.h>
#include<conio.h>
main(){
	char x;
	printf("enter your character\n");
	scanf("%c",&x);
	switch(x){
		case 'a':
		case 'e':
		case 'i':
		case 'o':	
		case 'u':		
		case 'A':		
		case 'E':	
		case 'I':
		case 'O':	
		case 'U':	
		printf("%c is a vowel",x);
		break;
		default:
		printf("%c is a consonant",x);
	}
	getch();
}