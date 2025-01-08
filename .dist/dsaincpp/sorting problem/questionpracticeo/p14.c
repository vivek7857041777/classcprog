#include<stdio.h>// calculating factorial of a number
int main(){
    int n,facto=1;
    printf("enter the number whose factorial has to calculate");
    scanf("%d",&n);
    while(n>0){
        facto*=n;
        n--;
    }
    printf("the factorial of a number is %d",facto);
    return 0;

}