#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,5,3,2};
    int n=sizeof(arr)/sizeof(int);
    int p;
    int t=INT8_MAX;
    int m=0;
    for(int j=0;j<n-1;j++){
    for(int i=j+1;i<n;i++){
       if( arr[i]<arr[m]){
        m=i;

       }

    }
        cout<<m<<endl; 

     swap(arr[m],arr[j]); }
    
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    






    return 0;
}