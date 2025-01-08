// writing program to sum of all numbers betn m and n;
#include<stdio.h>
int sum(int m,int n){
    int sum=0;
    m=m+1;
    while(m<n){
        sum+=m;
        m++;

    }
    return sum;
}
int main(){
    int m,n;
    printf("enter the value of m and n");
    scanf("%d",&m);
    scanf("%d",&n);
    if(m>n){
        return 0;
    }
    printf("the value of sum is %d",sum(m,n));
    return 0;

}