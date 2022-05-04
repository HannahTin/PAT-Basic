#include <bits/stdc++.h>
using namespace std;
int main(){
    string sell, want;
    cin>>sell >>want;
    int store[256]={0};
    for(auto s:sell) store[s]++;
    int less = 0;
    for(auto w:want){
        if(store[w]>0) store[w]--;
        else less++;
    }
    if(less==0) cout<< "Yes "<<sell.size()-want.size()<<endl;
    else cout<<"No "<<less<<endl;





//    unordered_map<char,int> ump;
//    for(auto s:sell) ump[s]++;
//    unordered_map<char,int> need;
//    for(auto w:want){
//        need[w]++;
//    }
//    int less = 0;
//    for(auto p = need.begin();p!=need.end();p++){
//        int diff = ump[p->first] - p->second;
//        if(diff<0)  less-=diff;
//    }
//    if(less ==0){
//        cout<<"Yes "<< sell.size()-want.size();
//    }else{
//        cout<<"No "<< less;
//    }
}
