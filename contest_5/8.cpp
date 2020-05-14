#include<bits/stdc++.h>
using namespace std;
int a[505][505], c[505][505];
int n, m;
int tinh(){
	int i,j, kq = 0;
	memset(c, 0, sizeof(c));
	for(int i = 1; i<= n; i++) c[i][1] = a[i][1];
	for(int i = 1; i<= m; i++) c[1][i] = a[1][i];	
	for(i = 2; i <= n; i++){
		for(j = 2; j <= m; j++){
			if(a[i][j]){
				c[i][j] = min(c[i-1][j], min(c[i][j-1],c[i-1][j-1])) + 1;
			}
			kq= max(kq, c[i][j]);
		}
	}
	return kq;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i<= n; i++){
			for(int j = 1; j <= m; j++) cin >> a[i][j];
		}
		cout << tinh() << endl;
	}
	return 0;
}
