#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	int a[n+1][m+1], c[n+1][m+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin >> a[i][j];
	}
	c[0][0] = a[0][0];
	for(int i=1 ; i<m ; i++)
		c[0][i] = c[0][i-1] + a[0][i];
	for(int i=1; i<n; i++){
		for(int j=0; j<m; j++){
			if (j == 0) c[i][j] = c[i-1][j] + a[i][j];
			else c[i][j] = min(c[i][j-1], min(c[i-1][j],c[i-1][j-1])) + a[i][j];
		}
	}
	cout << c[n-1][m-1] <<endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
