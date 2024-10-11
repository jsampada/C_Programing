#include<stdio.h>
int main(){
     int num=20;
     int num2=30;
     int res;
    
    res=num>num2;
    printf("\n res=num>num2=%d",res);

    res=num<num2;
    printf("\n res=num>num2=%d",res);

    res=num>=num2;
    printf("\n res=num>num2=%d",res);

    res=num<=num2;
    printf("\n res=num>num2=%d",res);

    res=num==num2;
    printf("\n res=num>num2=%d",res);

    res=num!=num2;
    printf("\n res=num>num2=%d",res);
}