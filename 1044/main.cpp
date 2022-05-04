#include <bits/stdc++.h>
using namespace std;
string low[13] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string high[13] = {"0","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void di2huo(int di){
    if(di<13) cout<<low[di]<<endl;
    else{
        cout << high[di/13];
        if(di%13!=0) cout<<" "<<low[di%13]<<endl;
        else cout<<endl;
    }
}
void huo2di(vector<string> huo){
    if(huo.size() == 1){
        for(int j=0;j<=12;j++){
            if(low[j]==huo[0]) cout<<j<<endl;
        }
        for(int h=1;h<=12;h++){
            if(high[h]==huo[0]) cout<<13*h<<endl;
        }
    }else{
        int p,k;
        for( p=1;p<=12;p++){
            if(high[p]==huo[0]) break;
        }
        for(k=0;k<=12;k++){
            if(low[k]==huo[1]) break;
        }
        cout<<13*p+k<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        string tmp;
        getline(cin,tmp);
        if(isdigit(tmp[0])) {
           di2huo(stoi(tmp));
        }
        else {
            stringstream ss(tmp);
            vector<string> huo;
            string cur;
            while(getline(ss,cur,' ')){
                huo.push_back(cur);
            }
            huo2di(huo);
        }
    }
    return 0;
}
