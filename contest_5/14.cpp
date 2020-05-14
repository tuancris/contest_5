#include <bits/stdc++.h>
using namespace std; 
  
string s;
int n, dp[1000][1000];
void solve () { 
    cin >> n;
    cin >> s;
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n; j++) {
            dp[i][j] = 0; 
        }
    }
    for (int i=1; i<=n; i++) { 
        for (int j=1; j<=n; j++) { 
            if (s[i-1] == s[j-1] && i != j) 
			      dp[i][j] =  1 + dp[i-1][j-1];           
            else  dp[i][j] = max(dp[i][j-1], dp[i-1][j]);  
        } 
    } 
    cout << dp[n][n] << endl;
} 
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
// https://www.geeksforgeeks.org/longest-repeating-subsequence/
