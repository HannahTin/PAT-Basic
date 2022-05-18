#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        int teacher, student, max_stu=-1, min_stu = M+1,cnt=0;
        double sum =0;
        cin >> teacher;
        for(int j=0;j<N-1;j++){
            cin >> student;
            if(student>=0 and  student <= M) {
                max_stu = max(student, max_stu);
                min_stu = min(student,min_stu);
                sum += student;
                cnt ++;
            }
        }
        cout << round((teacher + (sum - max_stu - min_stu)/(cnt-2))/2.0) <<endl;


    }
    return 0;
}
