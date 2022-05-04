#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,tmp;
    unordered_set<int> uset;
    set<int,greater<int>> ans;
    cin>> n;
    for(int i=0;i<n;i++){
        cin>> tmp;
        if(uset.find(tmp)==uset.end()){
            uset.insert(tmp);
            ans.insert(tmp);
        }else{
            continue;
        }
        while(tmp!=1){
            if(tmp%2!=0){
                tmp = (3*tmp+1)/2;
            }else{
                tmp /= 2;
            }
            if(uset.find(tmp)!=uset.end() and ans.find(tmp)!=ans.end()){
                ans.erase(tmp);
            }else{
                uset.insert(tmp);
            }
        }
    }
    auto p= ans.begin();
    while(p!=ans.end()){
        cout<<*p;
        p++;
        if(p!=ans.end()){
            cout<<" ";
        }else{
            cout<<endl;
        }
    }
    return 0;
}
