#include<iostream>
using namespace std;
int main(){
    int arr[]={6,8,5,24,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    
    return 0;

}