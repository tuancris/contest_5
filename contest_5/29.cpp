#include <bits/stdc++.h>
using namespace std; 
  
int dp[40];
string s;
int solve() {  
    cin >> s;
    int n = s.length();
    memset(dp, 0, sizeof(dp));
	dp[0] = 1, dp[1] = 1;  
    if(s[0]=='0')  return 0; 
    for (int i = 2; i <= n; i++) { 
        dp[i] = 0; 
        if (s[i-1] > '0')  dp[i] = dp[i-1]; 
        if (s[i-2] == '1' ||  (s[i-2] == '2' && s[i-1] < '7') ) 
            dp[i] += dp[i-2]; 
    } 
    return dp[n]; 
} 
int main() { 
    int t; cin >> t;
    while(t--) {
        cout << solve() << endl;
	}
    return 0; 
} 
// https://www.geeksforgeeks.org/count-possible-decodings-given-digit-sequence/
