#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // vector<int> s={5,3,2,7};
    // next_permutation(s.begin(),s.end());
    string t="vivek";
    next_permutation(t.begin(),t.end());
    for(char val:t){
        cout<<val<<endl;
    }

    return 0;
}
