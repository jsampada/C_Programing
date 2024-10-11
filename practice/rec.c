#include<stdio.h>

void hii(int num1){
    printf("\n value of num1=%d",num1);
    num1++;
    hii(num1);
}
int main()
{
    int num1=10;
    hii(num1);
    

}