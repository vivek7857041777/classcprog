//writing all program to delete all duplicate from an array
#include<stdio.h>
int p;

int dele(int *a,int k){
    int t=6;
    for(int i=k;i<t;i++){
        if(a[k]==a[i]){
            p=i;
            
            t--;
             for(int j=p;j<5;j++){
        a[p]=a[p+1];
    }

            break;
        }
      
    }
    return t;
   

}
int main(){
    int k;
    int a[6]={1,1,1,1,1,1};
    for(int m=0;m<5;m++){
    k=dele(a,m);}
    for(int n=0;n<k;n++){
        printf("%d\n",a[n]);
    }
    return 0;
}
