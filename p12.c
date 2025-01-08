#include<stdio.h>
#include<math.h>


// int len(int n){
//     int l=0;
//     while(n>0){
//         n=n%10;
//         l++;
//     }
//     return l;
// }
int arm(int n,int or){
    int r,result=0;
    int o;
    o=n;
    while(n>0){
        r=n%10;
        result+=pow(r,or);
        n=n/10;

    }
    if(o==result){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int p,or;
    printf("enter the value of p");
    scanf("%d",p);
    printf("enter the value of order");
    scanf("%d",or);
    if(arm(p,or) ==1){
        printf("this is a armgostron number");
    }
    else printf("this is not a armgostron number");
    return 0;
}