#include <bits/stdc++.h>
using namespace std;

void solve() {
	int C, N; vector<int> W;
	cin >> C >> N; 
	for(int i=0; i<N; i++) {
		int x; cin >> x;
		W.push_back(x);
	}
	vector<vector<int> > dp(N, vector<int>(C+1, 0));
	dp[0][0] = dp[0][W[0]] = 1; int ans = 0;
	for (int i=0; i<N; i++) {
		for (int j=0; j<=C; j++) {
			if (!dp[i][j]) continue;
			ans = max(ans, j);
			if (i == N-1) continue;
			dp[i+1][j] |= dp[i][j];
			if (j + W[i+1] <= C) dp[i+1][j+W[i+1]] |= dp[i][j];
		}
	}
	cout << ans << endl;
}
int main() {
	solve();
	return 0;
}
