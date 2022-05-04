#include <bits/stdc++.h>
using namespace std;
struct person{
    string name;
    int height;
    person(){}
    person(string name,int height):name(name),height(height){}
};
bool cmp(person& a, person& b){
    if(a.height == b.height)
        return a.name < b.name;
    else
        return a.height > b.height;
}
int main() {
    int N,K;
    cin>>N>>K;
    vector<person> vec(N);
    for(int i = 0;i<N;i++){
        cin>>vec[i].name>>vec[i].height;
    }
    sort(vec.begin(),vec.end(),cmp);
    int idx = 0,m;
    deque<person> tmp;
    for(int i = 0;i<K;i++){
        m = N / K;
        if(i==0) m += N%K;
        for(int j=0;j<m;j++){
            if(j%2==0) tmp.push_back(vec[idx++]);
            else tmp.push_front(vec[idx++]);
        }
        for(int k=0;k<m;k++){
            cout << tmp[k].name << ((k==m-1)?"":" ");
        }
        cout<<endl;
        tmp.clear();
    }
    return 0;
}
