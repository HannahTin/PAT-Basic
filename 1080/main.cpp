#include <bits/stdc++.h>
using namespace std;
struct student{
    string id;
    int code = 0, mid = -1, final = -1, sum =0;
    int g;
};
bool cmp(student& a, student& b){
    if(a.g == b.g) return a.id <b.id;
    else return a.g > b.g;
}
int main() {
    int P, M, N, g;
    cin >> P >> M >> N;
    unordered_map<string,student> ump;
    for(int i=0;i<P;i++){
        string sid;
        int scode;
        cin >> sid >> scode;
        if(scode >=200) {
            ump[sid].id = sid;
            ump[sid].code = scode ;
        }
    }
    for(int j = 0;j<M;j++){
        string sid;
        int smid;
        cin >> sid >> smid;
        if(ump.find(sid)!=ump.end()) {
            ump[sid].id = sid;
            ump[sid].mid =smid;
        }
    }
    for(int k = 0;k<N;k++){
        string sid;
        int sfinal;
        cin >> sid >> sfinal;
        if(ump.find(sid)!=ump.end()) {
            ump[sid].id = sid;
            ump[sid].final =sfinal;
        }
    }
    vector<student> ans;
    for(auto p= ump.begin();p!=ump.end();p++){
        if(p->second.mid > p->second.final) g = round(0.4 * p->second.mid + 0.6 * p->second.final);
        else g = p->second.final;
        if(g>=60){
            p->second.g = g;
            ans.push_back(p->second);
        }
    }
    sort(ans.begin(),ans.end(),cmp);
    for(int q=0;q<ans.size();q++){
        cout << ans[q].id <<" "<<ans[q].code <<" "<<ans[q].mid << " "<<ans[q].final <<" "<<ans[q].g<<endl;
    }

    return 0;
}
