#include<stdio.h>
void accept(int * n1){
    printf("Enter a value of n1=");
    scanf("%d",n1);
}
void display(int n1){
    printf("value of num1=%d", n1);
}
int main(){
    int num1;
    accept(&num1);
    display(num1);

}