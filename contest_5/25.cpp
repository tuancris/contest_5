#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, dp[50];
void solve() { 
    dp [0] = dp[1] = 1; dp[2] = 2;
    for (int i = 3; i <= n; i++) 
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];      
    cout << dp[n] << endl;
} 
int main() {
	int t; cin >> t;
	while(t--) {
	    cin >> n;
		solve();
	}
	return 0;
}
  
