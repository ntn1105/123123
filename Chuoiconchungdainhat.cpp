#include<bits/stdc++.h>
using namespace std;
string X, Y;
int LCS_dp(int m, int n){

    int a[m+1][n+1];
    for(int i=1; i<=m; i++) a[i][0] =0;
    for(int i=1; i<=n; i++) a[0][i] =0;
    for(int i=1; i<=m; i++) 
    for(int j=1; j<=n; j++)
        if(X[i-1]==Y[j-1]) a[i][j]=1+a[i-1][j-1];
        else a[i][j]=max(a[i-1][j], a[i][j-1]);
    return a[m][n];
}
int main(){
    X="SDKASDKASDHFHAS";
    Y="ASDKASDKASDHFHAS";
    long t1,t2,m,n;
    m=X.length();
    n=Y.length();
    t1=clock();
    cout<<"Do dai choi con chung dai nhat cua X va Y "<<LCS_dp(m,n)<<endl;
    t2=clock();
    cout<<t2-t1<<endl;
    return 0;
}