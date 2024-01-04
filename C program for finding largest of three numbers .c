// Using ternary operator to find largest of three numbers//
#include <stdio.h>
int main () {
int number1,number2,number3,max;
printf("\nEnter number 1 : ");
scanf("%d",&number1);
printf("\nEnter number 2 : ");
scanf("%d",&number2);
printf("\nEnter number 3 : ");
scanf("%d",&number3);
max=(number1>number2)?(number1>number3?number1:number3):(number2>number3 ? number2 : number3);
printf("\nMaximum among all three numbers = %d",max);
return 0;
}
![Largest using else if](https://github.com/Farzaan-Rather/Assignment-/assets/147377642/1bc33484-66c8-45c6-b703-da07eda44f75)
