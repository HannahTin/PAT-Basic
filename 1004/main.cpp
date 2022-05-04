#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string line;
    int max_grade = INT_MIN, min_grade = INT_MAX;
    string max_grade_name,max_grade_no,min_grade_name,min_grade_no;
    for(int i=0;i<n;i++){
        string name, no;
        int grade;
        cin>> name >> no >> grade;
        if(grade<min_grade){
            min_grade = grade;
            min_grade_name = name;
            min_grade_no = no;
        }
        if(grade>max_grade){
            max_grade = grade;
            max_grade_name = name;
            max_grade_no = no;
        }
    }
    cout<<max_grade_name<<" "<< max_grade_no<<endl;
    cout<<min_grade_name<<" "<< min_grade_no<<endl;
    return 0;
}
