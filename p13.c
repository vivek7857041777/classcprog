#include<stdio.h>
#include<math.h>
int angs(int n,int order){
    int r,sum=0;
    int k=n;
    while(n){
        r=n%10;
        sum+=pow(r,order);
        n=n/10;
    }
    if(k==sum){
        return 1;
    }
    else return 0;
}
int order(int n){
    int l=0;
    while(n){
        n=n/10;
        l++;
    }
    return l;
}

int main(){
    int n,ord;
    printf("enter the value of n");
    scanf("%d",&n);
    // printf("enter the value of order");
    // scanf("%d",&order);
    ord=order(n);
    if(angs(n,ord)==1){
        printf("%d this is angostrome number",n);
    }
    else printf("%d this number is not angostrome number",n);
    return 0;
}