#include<stdio.h>

void highest(int *a){
    int k=0;
    
    for(int i=1;i<6;i++){
        if(a[k]<a[i]){
            k=i;
        }
        

    }
    printf(" highest value is %d",a[k]);
    


}
int main(){
    int a[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    
    highest(a);
    return 0;

}