#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,5,2,3};
    int n=sizeof(arr)/sizeof(int);
    int p=0;
    int m=INT8_MAX;
    // for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            p=min(m,arr[j]);
            m=p;


        }
        cout<<m;
        // swap(m,arr[i]);
        

    // }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
    return 0;

    
}

