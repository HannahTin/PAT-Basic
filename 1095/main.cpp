#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>& a,pair<string,int>& b){
    if(a.second == b.second) return a.first<b.first;
    else return a.second > b.second;
}

void print(vector<pair<string,int>>& vec){
    if(vec.size()==0) printf("NA\n"); //如果该类别为空
    else{
        for(int i=0;i<vec.size();i++)
//            cout << vec[i].first<<" "<<vec[i].second<<endl;
            printf("%s %d\n",vec[i].first.c_str(),vec[i].second);
    }

}
int main() {
    int N, M, grade;
    cin >> N >> M;
//    scanf("%d %d",&N,&M);
    string id;
    vector<pair<string,int>> vecT;
    vector<pair<string,int>> vecA;
    vector<pair<string,int>> vecB;
    vector<pair<int,int>> test_site(900);
    unordered_map<string,int> test_date;
    for(int i=0;i<N;i++){
        cin >> id >>grade;
        if(id[0]=='T') vecT.push_back({id,grade});
        else if(id[0]=='A') vecA.push_back({id,grade});
        else vecB.push_back({id,grade});

        test_site[stoi(id.substr(1,3))-101].first++;
        test_site[stoi(id.substr(1,3))-101].second+=grade;

        string date = id.substr(1,9);
        test_date[date]++;
    }
    sort(vecT.begin(),vecT.end(),cmp);
    sort(vecA.begin(),vecA.end(),cmp);
    sort(vecB.begin(),vecB.end(),cmp);

    for(int j=0;j<M;j++){
        int type;
//        cin>> type;
        scanf("%d",&type);
        if(type == 1) {
            char t;
             cin >> t;
//            scanf("%c",&t);
            printf("Case %d: %d %c\n",j+1,type,t);
//            cout << "Case "<<j+1<<": " <<1 <<" "<<t<<endl;
            if (t == 'T') print(vecT);
            else if (t == 'A') print(vecA);
            else if (t == 'B') print(vecB);
            else printf("NA\n");
        }else if(type ==2){
            int site;
            cin >> site;
            //scanf("%d",&site);
//            cout << "Case "<<j+1<<": " <<2 <<" "<<site<<endl;
            printf("Case %d: %d %d\n",j+1,type,site);
            if(site>=101 && site <= 999 && test_site[site-101].first!=0)
                cout << test_site[site-101].first << " "<<test_site[site-101].second<<endl;
            else printf("NA\n");
        }else if(type == 3){
            string day;
            cin>>day;
//            cout << "Case "<<j+1<<": " <<3 <<" "<<day<<endl;
            printf("Case %d: %d %s\n",j+1,type,day.c_str());
            vector<pair<string,int>> ans;
            for(auto p= test_date.begin();p!=test_date.end();p++){
                if(p->first.substr(3,6)==day){
                    ans.push_back({p->first.substr(0,3), p->second});
                }
            }
            sort(ans.begin(),ans.end(),cmp);
            print(ans);
        }else{    //其他指令
            string t;
            cin >> t;
//            cout << "Case "<<j+1<<": " <<type <<" "<<t<<endl;
            printf("Case %d: %d %s\n",j+1,type,t.c_str());
//            cout <<"NA"<<endl;
            printf("NA\n");
        }

    }
    return 0;
}
