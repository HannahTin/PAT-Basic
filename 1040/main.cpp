#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int n = str.size();
    long long ans=0;
    long long vp[n],cnp=0;
    for(int i=0;i<n;i++){
        if(str[i]=='P') cnp++;
        if(str[i]=='A') vp[i] = cnp;
    }
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        if(str[i]=='T') cnt++;
        if(str[i]=='A' and vp[i]!=0) ans+=vp[i]*cnt;
    }
    cout<<ans%1000000007 <<endl;
    return 0;
}
