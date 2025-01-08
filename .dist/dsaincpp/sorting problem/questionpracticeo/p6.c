#include<stdio.h>
int sum=0;
int addnumber(int n){
    int r;
    while(n>0){
    r=n%10;
    sum+=r;
    n=n/10;}
    return sum;

}
int main(){
    int number;
    printf("enter the value of number");
    scanf("%d",&number);
    addnumber(number);// this is called as pass by value
    printf("the sum of all digit of number is equal to %d",sum);
    return 0;

}