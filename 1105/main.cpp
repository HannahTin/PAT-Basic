#include <bits/stdc++.h>
using namespace std;
int main() {
    int startA, startB, N, add;
    cin >> startA >> startB >> N;
    int data[100005], next[100005];
    for(int i = 0;i < N;i++){
        cin >> add;
        cin >> data[add] >> next[add];
    }
    vector<int> a;
    vector<int> b;
    while(startA != -1){
        a.push_back(startA);
        startA = next[startA];
    }
    while(startB!=-1){
        b.push_back(startB);
        startB = next[startB];
    }
    if(a.size() <  b.size()) {
        swap(a,b);
    } // a是长的
    reverse(b.begin(),b.end());
    int idb = 0;
    for(int i = 0;i < a.size();i++){
       if(i==0) printf("%05d %d",a[i],data[a[i]]);
       else if(idb != b.size() && i%2 == 0) {
           printf(" %05d\n%05d %d",b[idb],b[idb],data[b[idb]]);
           idb++;
           printf(" %05d\n%05d %d",a[i],a[i],data[a[i]]);
       }else
           printf(" %05d\n%05d %d",a[i],a[i],data[a[i]]);
    }
    if(idb!=b.size()) printf(" %05d\n%05d %d",b[idb],b[idb],data[b[idb]]);
    printf(" -1\n");
    return 0;
}
