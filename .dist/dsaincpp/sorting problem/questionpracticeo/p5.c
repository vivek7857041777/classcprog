#include<stdio.h>//trying to revese to an array
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int numbs[8];
    int start=0,end=7;
    for(int i=0;i<=7;i++){
        printf("enter the value of element of index %d",i);
        scanf("%d",&numbs[i]);
    }
    while(start<end){
        swap(&numbs[start],&numbs[end]);
        start++;
        end--;

    }
    for(int k=0;k<8;k++){
        printf("reverse first element is %d\n",numbs[k]);
    }
    return 0;
    

}