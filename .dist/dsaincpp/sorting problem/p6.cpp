#include<iostream>
#include<maP>
using namespace std;
int main(){
    map<string,int> m;
    m["tv"]=50;
    m["watch"]=300;
    m["headphone"]=49;
    m["earbud"]=60;
    m["earbud"]=50;
    m["camera"]=58;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl<<m.count("earbud")<<endl;
    cout<<m["earbud"];
    auto it=m.find("camera");
    
    if(it!=m.end()){
        cout<<"found";
        cout<< (*it).first<<" "<< it->second;
    }
    else{
        cout<< " not found";
    }
   
    return 0;

}