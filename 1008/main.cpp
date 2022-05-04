#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& A,int N){
    for(int i=0;i<N;i++){
        cout<<A[i];
        if(i==N-1) cout<<endl;
        else cout<<" ";
    }
}
int main() {
    int N,M;
    while(cin>>N>>M){
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        int stp = M%N;
        if(stp==0) print(A,N);
        else{
            //将前x个和后x个替换
            for(int i=0;i<stp;i++){
                swap(A[i],A[N-stp+i]);
            }
            //将后x和中间替换
            for(int i= stp;i<N-stp;i++){
                swap(A[i],A[i+stp]);
            }
            print(A,N);
        }
    }
    return 0;
}
