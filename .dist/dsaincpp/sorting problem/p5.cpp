#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int ,char> p ={ 5,'a'}; 
    vector<pair<int,int>> vec={{2,5},{4,8}};
    vec.push_back({4,5});
    pair<int,pair<int,char>> t={5,{2,'a'}};
    cout<<t.second.second;
    cout<<endl<<p.second;
    for(pair<int,int> m:vec){
        cout<< m.first<<" "<<m.second<<endl;
    }
    return 0;
}