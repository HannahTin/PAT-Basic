#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> hands, eyes, mouth;
    for(int i=0;i<3;i++){
        string str,tmp; int j =0;
        getline(cin,str);
        while(j<str.size()){
            if(str[j] =='['){
                j++;
                tmp.clear();
                while(str[j]!=']') tmp+=str[j++];
                if(i==0) hands.push_back(tmp);
                else if(i==1) eyes.push_back(tmp);
                else mouth.push_back(tmp);
            }
            j++;
        }
    }
    int sz_h = hands.size(),sz_e=eyes.size(),sz_m= mouth.size();
    int K;
    cin>> K;
    string left_hand,left_eye,mid_mouth,right_eye,right_hand;
    for(int i = 0;i<K;i++){
        bool flag = true;
        left_hand.clear(); left_eye.clear(); mid_mouth.clear();
        right_eye.clear(); right_hand.clear();
        for(int j =0;j<5;j++){
            int q; cin>>q;
            if(j == 0 || j== 4){
                if (q>=1 and q<=sz_h) {
                   if(j==0) left_hand += hands[q-1];
                   else right_hand = hands[q-1];
                }
                else flag = false;
            }
            if(j== 1 || j== 3) {
                if(q>=1 and q<=sz_e) {
                    if(j==1) left_eye += eyes[q-1];
                    else right_eye = eyes[q-1];
                }
                else flag = false;
            }
            if(j==2){
                if(q>=1 and q<=sz_m) mid_mouth = mouth[q-1];
                else flag = false;
            }
        }
        if(!flag) cout <<"Are you kidding me? @\\/@";
        else cout<<left_hand <<"("<<left_eye <<mid_mouth<<right_eye<<")"<<right_hand;
        cout<<endl;
    }


    return 0;
}
