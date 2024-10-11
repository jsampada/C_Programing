#include<stdio.h>
int sum( int n1, int n2){
    int res;
    res=n1+n2;
    return res;

}
int main(){
    int num1=20,num2=30,num3=30,num4=50,num5=60,num6=70;
    int res;
    res=sum(num1,num2);
    printf("\n res=%d",res);

    res=sum(num3,num4);
    printf("\n res=%d",res);

    res=sum(num5,num6);
    printf("\n res=%d",res);

    


}