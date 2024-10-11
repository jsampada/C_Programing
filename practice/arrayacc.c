#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    printf("\n print the ar=%u",arr);
    printf("\n print the ar=%u",ptr);
     printf("\n print the ar=%d",*ptr);
     printf("\n ptr[1]=%d",ptr[1]);
      printf("\n 1[arr]=%d ",1[arr]);//syntax is ok

}
