#include<stdio.h>// sortinf of an array at its right place
int main(){
    int elem=11;
    int in;
    int a[6]={5,6,7,10,15};
    for(int i=0;i<5;i++){
        if(elem<a[i]){
            in=i;
            break;

        }
    }
    for(int j=4;j>=in;j--){
        a[j+1]=a[j];

    }
    a[in]=elem;
    for(int k=0;k<6;k++){
        printf("%d\n",a[k]);
    }
    return 0;

}