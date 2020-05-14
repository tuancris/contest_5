#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[10000], n;
void solve() { 
    cin >> n;
	dp[0] = 0, dp[1] = 1, dp[2] = 2, dp[3] = 3; 
    for(int i = 4; i <= n; i++) { 
        dp[i] = i; 
        for(int x = 1; x <= ceil(sqrt(i)); x++) { 
            int temp = x * x; 
            if(temp > i)  break; 
            else dp[i] = min(dp[i], 1 + dp[i - temp]); 
        } 
    } 
    cout << dp[n] << endl;
} 
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
// https://www.geeksforgeeks.org/minimum-number-of-squares-whose-sum-equals-to-given-number-n/
