//Program to find maximum among three numbers using ElseIf//
#include <stdio.h>
int main () {
int number1,number2,number3,max;
printf("\nEnter three numbers : ");
scanf("%d %d %d",&number1,&number2,&number3);
if (number1>number2 && number1>number3){
    printf("\n%d is the Largest",number1);
}
else if (number2>number1 && number2>number3){
    printf("\n%d is the Largest",number2);
}
else {
    printf("\n%d is the Largest",number3);
}
return 0;
}
