#include<stdio.h>
int main(){
    int num1=23;
    int num2;
    num2=++num1;
    printf("\nvalue of num1=%d",num1);
     printf("\nvalue of num2=%d",num2);
     num2=num2++;
     printf("\nvalue of num2=%d",num2);
    num2=++num2;
     printf("\nvalue of num2=%d",num2);
}