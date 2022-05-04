#include <bits/stdc++.h>
using namespace std;
int convert(int num){
    int sum = 0;
    while(num){
        sum += num%10;
        num /=10;
    }
    return sum;
}
int main() {
    int N, tmp;
    cin >> N;
    set<int> id;
    for(int i=0;i<N;i++){
        cin >> tmp;
        id.insert(convert(tmp));
    }
    cout << id.size()<<endl;
    for(auto p = id.begin();p!=id.end();p++){
        if(p==id.begin()) cout<< *p;
        else cout <<" "<<*p;
    }
    cout<<endl;
    return 0;
}
