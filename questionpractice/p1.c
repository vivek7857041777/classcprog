#include<stdio.h>// this for writing factorial of n
int fac;
int fact(int n){
    int i=0;fac=1;
    while(n-1>0){
        fac*=n-i;
        i++;
    }
    return fac;
}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);

    printf(" the value of factorial is %d",fact(n));
    
    return 0;

}