#include<stdio.h>
#include<conio.h>
#include<math.h>
void arm(){
    int n,s=0,d=0,p,k;
    printf("enter your number\n");
    scanf("%d",&n);
    for(p=n;p!=0;p=p/10){
        d++;

    }
    for(p=n;p!=0;p=p/10){
        k=p%10;
        s=s+pow(k,d);
        }
    if(s==n)
        printf("%d is a an armstrong number",n);
    else
        printf("%d is not an armstrong nummber",n);
}
int sum(){
    int l,p,k,s;
    printf("enter your number\n");
    scanf("%d",&l);
    for(p=l;p=!0;p=p/10){
        k=p%10;
        s=s+k;
    }
    return s;
}
void prime(int o){
    int i,s=0;
   for(i=2;i<o;i++){
    if(o%i==0)
        s=s+1;

    }
    if(s>0)
        printf("number is not prime");
    else
        printf("number is  prime");

}
int dtb(){

}
void main(){
    int x,n,r;
    printf("choose your operation\n1. armstrong number\n2. sum of digits\n3. prime number checker\n4. decimal to binarry\n");
    scanf("%d",&x);
    switch(x){
        case 1:
            arm();
        break;
        case 2:
            r=sum();
            printf("%d is the sum of the digits",r);
        break;
        case 3:
            printf("enter your number\n");
            scanf("%d",&n);
            prime(n);
        break;
        case 4:
            printf("enter your number\n");
            scanf("%d",&n);
            r=dtb(n);
            printf("the number in binary is %d",r);
        break;
        default:
            printf("invalid");
        break;
       }
    getch();
}
