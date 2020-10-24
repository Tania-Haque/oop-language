#include<stdio.h>
int main(){
 int choice;
 float t,c,f;
printf("press 1 to convert c to f:\n");
printf("press 2 to convert f to c:");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
    printf("enter celcius temp:");
    scanf("%f",&t);
    f=(1.8*t)+32;
    printf("fahren=%f",f);
    break;
    case 2:
    printf("enter fahren temp:");
    scanf("%f",&t);
    c=(t-32)/1.8;
    printf("celcius=%f",c);
    break;
    default:
        printf("not correct option");
}
getch();
}
