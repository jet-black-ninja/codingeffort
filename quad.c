//roots of quad equation  19ec063 11.9.19
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,c,d;
float x,y;
printf("enter the variables of your quadratic equation");
scanf("%d%d%d",&a,&b,&c);
if((pow(b,2)-4*a*c)>=0){
d=pow(b,2)-4*a*c;
x=(-b+sqrt(d))/2*a;
y=(-b-sqrt(d))/2*a;
printf("%f,%f are the roots of the equation",x,y);
}
else
printf("the roots are imaginary\n" );
getch();
return 0;
}