#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={2,5,3,6};
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    return 0;
}