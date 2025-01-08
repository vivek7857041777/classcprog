#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    char n;
    printf("enter the value of a");
    scanf("%d",&a);
    
    printf("enter the value b");
    scanf("%d",&b);
    printf("enter the operator");
    scanf("%c",&n);
    if(n=='+'){
        printf(" addition is %d",a+b);
    }
    else if(n=='-'){
        printf("subtraction is %d",a-b);
    }
    else if(n=='*'){
        printf("multiplication of two number is %d",a*b);
    }
    else if(n=='/'){
        printf("division of two number is %d",a/b);
    }
    else{
        printf("modolus of two number is %d",a%b);
    }
    return 0;
}