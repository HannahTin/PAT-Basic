#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<pair<string,int>> seats(N+1);
    string id;
    int test, real;
    for(int i=0;i<N;i++){
        cin >> id >> test >> real;
        seats[test].first = id;
        seats[test].second = real;
    }
    int m,query;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>query;
        cout<< seats[query].first <<" "<<seats[query].second<<endl;
    }
}