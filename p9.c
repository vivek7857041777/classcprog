#include<stdio.h>
#include<math.h>
int len(int n){
    int l=0;
    while(n>0){
        n=n/10;
        l++;
    }
    return l;
}
int arm(int p){
    int result=0,r;
    while(p>0){
        r=p%10;
        result+=pow(r,len(p));
        p=p/10;
        printf("%d\n",len(p));


    }
    return result;

}
int main(){
    int t;
    printf("enter the value of t");
    scanf("%d",&t);
    printf("%d",arm(t));
    // if(arm(t)==t){
    //     printf("%d this is an armostrome number",arm(t));
    // }
    // else printf("%d this is not an armgostrome number",t);
    return 0;
}
