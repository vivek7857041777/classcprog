#include<stdio.h>
int coutn( int *a){
    int p=0,n=0,z=0;
     for(int i=0;i<10;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else z++;
     }
     printf(" positve is %d negative is %d zero is %d",p,n,z);

}
int main(){
    int a[10];
    for(int j=0;j<10;j++){
        scanf("%d",&a[j]);
    }
    coutn(a);
    return 0;

}