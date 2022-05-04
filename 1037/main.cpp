#include <bits/stdc++.h>
using namespace std;
void func( int g1, int s1,int k1,int  g2, int s2,int  k2){
    int g3, s3, k3;
    if(k1<= k2){
        k3 = k2-k1;
    }else{
        s2--;
        k3 = 29+k2-k1;
    }
    if(s1<=s2){
        s3 = s2-s1;
    }else{
        g2--;
        s3 = 17+ s2-s1;
    }
    g3 = g2-g1;
    printf("%d.%d.%d\n",g3, s3, k3);

}
int main() {
    int g1, s1, k1, g2, s2, k2;
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
    if (17*g1*29 + 29*s1 + k1 > 17*g2*29 + 29*s2 + k2) {
        cout << "-";
        func(g2,s2,k2,g1,s1,k1);
    }else{
        func(  g1,s1,k1,g2,s2,k2);
    }
    return 0;
}
