#include<stdio.h>
int reves(int *a , int n){
    int start=0 ,end=n-1;
    int temp;
    

    while(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;




    }

}
int main(){
    int n=4,t=0,l=0;
    int a[n];
    while(t<n){
        scanf("%d",&a[t]);
        t++;
    }
    reves(a,n);
    while(l<n){
        printf("%d\n",a[l]);
        l++;
    }


}