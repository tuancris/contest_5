#include<bits/stdc++.h> 
#define ll long long
using namespace std;
const ll Mod = 1e9+7;

ll dp[10000], a[1000], n, k;
void input() {
		cin >> n >> k;
		for(int i=0; i<n; i++) cin >> a[i];
}
void solve() { 
    memset(dp,0,sizeof(dp));
	dp[0] = 1;
    for (int i=1; i<=k;i++) {
        for(int j=0; j<=n;j++) {
            if(i >= a[j]) dp[i] = (dp[i] + dp[i-a[j]]) % Mod;
        }
    }
	cout << dp[k] << endl;
} 
int main() {
	int t; cin >> t;
	while(t--){
	   input();
	   solve();
	}
	return 0;
}
