#include<stdio.h>
int num2=30;//global variable
 static int res;//static variable
int main(){
    int num1=20;//loccal variable
    res=num1+num2;
    printf("\n result is=%d",res);
}