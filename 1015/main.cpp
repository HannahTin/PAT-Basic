#include <bits/stdc++.h>
using namespace std;
bool cmp(tuple<int,int,int>& a,tuple<int,int,int>& b){
    if(get<1>(a)+get<2>(a) == get<1>(b)+get<2>(b) ){
        if(get<1>(a) == get<1>(b))
            return get<0>(a) < get<0>(b);
        else
            return get<1>(a) > get<1>(b);
    }else
        return get<1>(a)+get<2>(a) > get<1>(b)+get<2>(b);
}
int main() {
    int N,L,H;
    cin>>N>>L>>H;
    vector<tuple<int,int,int>> firClass;
    vector<tuple<int,int,int>> secClass;
    vector<tuple<int,int,int>> thrClass;
    vector<tuple<int,int,int>> fouClass;
    for(int i=0;i<N;i++){
        int id,de,cai;
        cin>>id>>de>>cai;
        if(de>=L && cai>=L){
            if(de>=H && cai>=H)
                firClass.push_back(make_tuple(id,de,cai));
            else if(cai<H && de>=H)
                secClass.push_back({id,de,cai});
            else if(cai<H && de<H && de>=cai)
                thrClass.push_back({id,de,cai});
            else
                fouClass.push_back({id,de,cai});
        }
    }
    int n1 = firClass.size(),n2 = secClass.size(),n3 = thrClass.size(),n4 = fouClass.size();
    cout<<n1+n2+n3+n4<<endl;
    sort(firClass.begin(), firClass.end(),cmp);
    sort(secClass.begin(),secClass.end(),cmp);
    sort(thrClass.begin(),thrClass.end(),cmp);
    sort(fouClass.begin(),fouClass.end(),cmp);
    for(int i=0;i<n1;i++){
        cout<<get<0>(firClass[i])<<" "<<get<1>(firClass[i])<<" "<<get<2>(firClass[i])<<endl;
    }
    for(int i=0;i<n2;i++){
        cout<<get<0>(secClass[i])<<" "<<get<1>(secClass[i])<<" "<<get<2>(secClass[i])<<endl;
    }
    for(int i=0;i<n3;i++){
        cout<<get<0>(thrClass[i])<<" "<<get<1>(thrClass[i])<<" "<<get<2>(thrClass[i])<<endl;
    }
    for(int i=0;i<n4;i++){
        cout<<get<0>(fouClass[i])<<" "<<get<1>(fouClass[i])<<" "<<get<2>(fouClass[i])<<endl;
    }
    return 0;
}
