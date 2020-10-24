#include<stdio.h>
int main(){
char ch;
scanf("%c",&ch);
switch(ch){
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("vowel\n");
    break;
default:
    printf("consonant\n");
}
    return 0;

}
