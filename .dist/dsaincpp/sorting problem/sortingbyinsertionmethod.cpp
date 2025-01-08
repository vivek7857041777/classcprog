#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,5,2,3};
    int curr=1;int pre=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            if(arr[curr]<arr[pre]){
                arr[pre+1]=arr[pre];
                
            }
        }

    }
}