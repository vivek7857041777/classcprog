#include<stdio.h>
void add(int *a,int *b,int *c){
    for(int i=0;i<14;i++){
        if(i<6){
        c[i]=a[i];}
        else {c[i]=b[i-6];}
    }
    

}
int main(){
    int a[6]={6,5,3,6,7,3};
    int b[8]={6,7,4,6,4,7,8,7};
    int c[14];
    add(a,b,c);
    for(int k=0;k<14;k++){
    printf("%d\n",c[k]);}
    return 0;

}