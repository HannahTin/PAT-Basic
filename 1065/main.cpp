#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    unordered_map<string,string> pairs;
    string p1,p2,p3;
    for(int i =0;i<N;i++){
        cin >> p1 >>p2;
        pairs[p1] =p2;
        pairs[p2] = p1;
    }
    int K,cnt =0;
    cin>>K;
    set<string> curr;
    for(int i = 0;i<K;i++){
        cin >> p3;
        curr.insert(p3);
        if(pairs.find(p3)!=pairs.end() and curr.count(pairs[p3])){
            cnt ++;
            curr.erase(p3);
            curr.erase(pairs[p3]);
        }
    }
    cout<<curr.size()<<endl;
    for(auto p= curr.begin();p!=curr.end();p++){
        if(p==curr.begin()) cout<<*p;
        else cout <<" "<<*p;
    }

    return 0;
}
