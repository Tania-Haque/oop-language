#include<stdio.h>
int main(){
int a,b;
char op;
printf("enter an op:");
scanf("%c",&op);
printf("enter two num:");
scanf("%d%d",&a,&b);
switch(op){
case '+':
    printf("%d+%d=%d",a,b,a+b);
    break;
    case '-':
    printf("%d-%d=%d",a,b,a-b);
    break;
    case '*':
    printf("%d*%d=%d",a,b,a*b);
    break;
    case '/':
    printf("%d/%d=%d",a,b,a/b);
    break;
    case '%':
    printf("%d%%d=%d",a,b,a%b);
    break;
    default:
        printf("not correct option");
}
getch();
}
