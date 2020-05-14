#include<bits/stdc++.h>
using namespace std;

int L[1005][1005], n, v, a[1005], c[1005];
void solve() {
	memset(L, 0, sizeof(L));
	for(int i=1; i<=n;i++) {
		for(int j=1; j<=v;j++) {
			if(j>=a[i] && L[i-1][j-a[i]] + c[i] > L[i-1][j]) {
				L[i][j] = L[i-1][j-a[i]] + c[i];
			}
			else L[i][j] = L[i-1][j];
		}
	}
	cout << L[n][v] << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> v;
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n; i++) cin >> c[i];
		solve();
	}
	return 0;
}
