#include <bits/stdc++.h>
using namespace std;

int n, k; vector<int> a;
void Input() {
	cin >> n >> k;
	for(int i=0; i<n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
}
void Solve() {
	vector<vector<int> > dp(n+1, vector<int>(k, -1)); dp[0][0] = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<k; j++) {
			if (dp[i][j]==-1) continue;
			dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
			dp[i+1][(j+a[i]) % k] = max(dp[i+1][(j+a[i]) % k], dp[i][j]+1);
		}
	}
	cout << dp[n][0] << endl;
}
int main() {
	int t; cin >> t;
	while(t--) {
		Input();
		Solve();
	}
	return 0;
}
