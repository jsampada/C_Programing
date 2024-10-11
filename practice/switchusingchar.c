#include<stdio.h>
int main()
{
    //Q. print the Day of a week as per inputed value of end user ?
    /*
            S. Sun
            M. Mon
            t. Tue
            W. Wed
            T. Thus
            F. Fri
            s. Sat
            Entnter your choice;
        
         here we need to check the condition multiple times
         and if we wont "to avoide the if ...else if...else lader in such case
         we can use switch case".
            
    
    */ 
   char choice;
   printf("\n S. Sun ");
   printf("\n M. Mon");
   printf("\n t. Tue ");
   printf("\n W. Wed");
   printf("\n   T. Thus ");
   printf("\n F. Fri");
   printf("\n s. Sat");
   printf("\n enter your choice=");
    scanf("%c",&choice);
    switch(choice)//
    {

        default: //when user enter the invalid input for given cases
                printf("\n Invalid input...!");
                break;
        case 'S':
                printf("\n Sun");
                break;// jump stmt => seperate the cases
        case 'M'://1+1=2
                printf("\n Mon");
                break;
        case 't'://5-2=3
                printf("\n Tue");
                break;

        case 'W':
                printf("\n Wed");
                break;
        case 'T':
                printf("\n Thu");
                break;
        case 'F':
                printf("\n Fri");
                break;
        case 's':
                printf("\n Sat");
                break;
    }
}