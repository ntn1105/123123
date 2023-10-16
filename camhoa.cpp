#include<bits/stdc++.h>
using namespace std;
int v[100][100], n, k;

// void doc_file()
// {
// 	ifstream fi("hoa.txt");
// 	if(fi == NULL) cout << "\nLoi doc file";
// 	else 
// 	{
// 		fi >> k >> n;
// 		for(int i = 1; i <= k; i++)
// 		{
// 			for(int j = 1; j <= n; j++)
// 			{
// 				fi >> v[i][j];
// 			}
// 		}
// 		cout << "\nDoc xong file";
// 		fi.close();
// 		cout << endl;
// 	}
//  } 
 
int cam(int i, int j){
	if(i == 0 || j == 0 || i > j) return 0;
	else {
		if(i == j){
			int k = 0;
			for(int h = 1; h <= j; h++) k += v[h][h];
			return k;
		} else {
			return max(cam(i-1,j-1) + v[i][j], cam(i,j-1));
		}
	}
}
void sinh(int k,int n){
	for (int i=1;i<=k;i++)
	for(int j=1;j<=n;j++)
		v[i][j] = 1+rand()%100;
}

int main()
{
	// doc_file();
//	for(int i = 1; i <= k; i++){
//		for(int j = 1; j <= n; j++){
//			cout << v[i][j] << " ";
//		}
//	}
int k=30;
int n=50;
	sinh(k,n);
	cout<< "\nKet qua la: " << cam(k,n);
}