#include<bits/stdc++.h>
using namespace std;
int n=0,*d;
void docfile(){
    fstream fi("matrix.txt");
    if( fi ==NULL)
        cout<<"Khong duoc duoc file";
    else{
        fi>>n;
        d=new int[n+1];
        for(int i=0;i<=n;i++)
            fi>>d[i];
            fi.close();
            cout<<"\n doc xong file";

    }
    
 }
 int tinh(int i,int  j){
    if(i==j) return 0;
    else if(j==(i+1)) return d[i-1]*d[i]*d[i+1];
    else {
        
    }
 }

