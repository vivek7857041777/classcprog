#include<stdio.h>
int main(){
    int n;
    printf("enter the number to check positive negative or zero");
    scanf("%d",&n);
    if(n>0) printf("this is positive number");
    else if(n==0) printf("this is zero number");
    else printf("this is negative number");
    return 0;
}