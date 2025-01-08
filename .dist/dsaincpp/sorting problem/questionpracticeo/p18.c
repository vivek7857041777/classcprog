#include<stdio.h>
int main(){
    int n,even=0,odd=0;
    scanf("%d",&n);
    while(n!=0){
        if(n%2==0){
            even++;
            
        }
        else odd++;
        printf("enter the value of n");
        scanf("%d",&n);
    }
    printf("the count of even no is %d\n",even);
    printf("the coutn of odd no is %d",odd);
    printf("program has been completed");
    return 0;
}