#include<bits/stdc++.h>
using namespace std;
string X, Y;

int LCS(int m, int n){
    if(m == 0||n == 0) return 0;
        else if(X[m-1] ==Y[m-1]) return 1+ LCS(m-1,n-1);
        else return max(LCS(m-1,n),LCS(m,n-1));
}
int main(){
    X="SDKASDKASDHFHAS";
    Y="ASDKASDKASDHFHAS";
    long t1,t2,m,n;
    m=X.length();
    n=Y.length();
    t1=clock();
    cout<<"Do dai choi con chung dai nhat cua X va Y "<<LCS(m,n)<<endl;
    t2=clock();
    cout<<t2-t1<<endl;
    return 0;
}