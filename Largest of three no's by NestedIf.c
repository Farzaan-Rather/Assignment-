//C program to find maximum of three numbers using nested if//
#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter Three Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("\n%d is greatest number ",a);
        }else{
            printf("\n%d is greatest number ",c);
        }
    }else if(b>a){
        if(b>c){
            printf("\n%d is greatest number ",b);
        }else{
            printf("\n%d is greatest number ",c);
        }
    }else{
        printf("\n%d is greatest number ",a);
    }
    return 0;
}
