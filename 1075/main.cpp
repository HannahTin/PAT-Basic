#include <bits/stdc++.h>
using namespace std;
int main() {
//    int startAddress, N, K, temp;
//    cin >> startAddress >> N >> K;
//    int data[100005], next[100005];
//    for (int i = 0; i < N; i++) {
//        cin >> temp;
//        cin >> data[temp] >> next[temp];
//    }
//    vector<int> neg;
//    vector<int> big;
//    vector<int> small;
//    while(startAddress != -1){
//        if(data[startAddress] < 0) neg.push_back(startAddress);
//        else if(data[startAddress] >=0 and data[startAddress] <= K) small.push_back(startAddress);
//        else big.push_back(startAddress);
//        startAddress = next[startAddress];
//    }
//    neg.insert(neg.end(),small.begin(),small.end());
//    neg.insert(neg.end(),big.begin(),big.end());
//    for(int i=0;i<neg.size()-1;i++) {
//        printf("%05d %d %05d\n",neg[i],data[neg[i]],neg[i+1]);
//    }
//    printf("%05d %d -1\n",neg[neg.size()-1],data[neg[neg.size()-1]]);
    vector<int> a ={2,4,1};
    vector<int>b = {5,3};
    vector<int> c={0,9};
    c.resize(a.size()+b.size()+c.size());
    merge(a.begin(),a.end(),b.begin(),b.end(),c.end());
//    c.insert(c.begin()+1,a.begin(),a.end());
    for(auto cc:c) cout << cc <<endl;

    return 0;
}
