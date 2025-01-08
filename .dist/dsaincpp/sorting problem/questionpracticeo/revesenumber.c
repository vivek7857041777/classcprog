#include<stdio.h>
int sum=0;
// reverse four digit number
int reverse(int n){
    int r,pow=1000;
    while(n>0){
        
        
        r=n%10;
        sum+=r*pow;
        pow/=10;
        n=n/10;

    }
    return sum;

}
int main(){
    int p;
    printf("enter the value of number p is ");
    scanf("%d",&p);
    reverse(p);
    printf("the value  of reverse of number is %d",sum);
    return 0;

}