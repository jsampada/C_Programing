#include<stdio.h>
int fact(int n){
    int res;
    if(n==0){
        return 1;
    }
    res=n*fact(n-1);
    return res;
    fact(n);
}
int main(){
   
    int r;
    int n;
    printf("Enter a number= ");
    scanf("%d",&n);
    r=fact(n);
    printf("\n fact of num=%d",r);
    return 0;

}