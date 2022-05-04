#include <bits/stdc++.h>
using namespace std;
struct person{
    string name;
    string date;
    person(string name,string date):name(name),date(date){}
};
bool cmp(const person& a, const person& b){
    return a.date < b.date;
}
int main() {
    int n;
    cin>>n;
    vector<person> vec;
    for(int i = 0;i < n;i++){
        string name,date;
        cin>> name >> date;
        if(date<"1814/09/06" || date>"2014/09/06" ) continue;
        // person p(name,date);
        //  vec.push_back(p);
        vec.emplace_back(name,date);
    }
    sort(vec.begin(),vec.end(),cmp);
    int sz = vec.size();
    if(sz!=0)
        cout<<vec.size()<< " "<<vec[0].name << " "<< vec[sz-1].name<<endl;
    else
        cout<<sz;
    return 0;
}
