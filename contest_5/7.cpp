#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll Mod = 1e9+7;
int n, k;
void solve() {
    cin >> n >> k;
	vector<int> dp(n, 0);
	int sum = 0;
	for (int i=0; i<n; i++) {
		dp[i] = (sum + (i < k)) % Mod;
		sum = (sum + dp[i]) % Mod;
		if (i >= k) sum = (sum + Mod - dp[i-k]) % Mod;
	}
	cout << dp[n-1] << endl;
}
/*ll solve() {
    cin >> n >> k;
	vector<ll> result;
    result.push_back(1);
    ll sum = 0;
    for (int i = 1; i <= k; ++i) {
        sum = (sum + result.back()) % Mod;
        result.push_back(sum);
    }
    if (n <= k)  return result[n];
    for (int i = k + 1; i <= n; ++i) {
        result.push_back((2 * result.back() % Mod - result[i - k - 1] % Mod + Mod) % Mod);
    }
    return  result.back();
}*/
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
