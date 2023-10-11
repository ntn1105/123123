#include<bits/stdc++.h>
using namespace std;
string s;
// int dx(int i,int j){
//     if(i>j) return 0;
//     else
//         if(i==j) return 1;
//         else 
//           if(s[i]==s[j]) return 2+ dx(i+1,j-1);
//           else return max(dx(i+1,j),dx(i,j-1));
// }
// int main()
// {
//     s="ADAKDKAOJDALAJD";
//     int n = s.length()-1;
//     cout<<"chuoi con doi xung dai nhat cua "<<s<<"co do dai "<<dx(0,n);
// } 
int L_DP(string s){
    int n=s.length();
    int a[n][n];

    for(int i=0; i<n; i++) a[i][i] = 1;
    for(int i=n-2; i>=0; i--)
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j]) a[i][j] = 2+a[i+1][j-1];
            else a[i][j] = max(a[i+1][j],a[i][j-1]);
        }
    return a[0][n-1];
}
int main()
{
    s="ADAKDKAOJDALAJD";
    int n = s.length()-1;
    cout<<"chuoi con doi xung dai nhat cua "<<s<<" co do dai "<<L_DP(s);
} 