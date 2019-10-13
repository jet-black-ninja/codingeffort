#include<stdio.h>
#include<conio.h>
int area( int l ,int b){
    int a;
    a=l*b;
    return a;
}

int main(){
    int x, y;
    printf("enter your numbers\n");
    scanf("%d%d",&x,&y);
    int a=area(x,y);
    printf("%d",a);
    getch();
    return 0;
}

