#include<stdio.h>// swapping two number wihout using third variable
int main(){
    int a,b;
    printf("enter the value of a b");
    scanf("%d%d",&a,&b);
    

    
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the final value of a will be %d",a);
    printf("the final value of b will be %d",b);
    return 0;

    

}