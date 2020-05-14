#include <bits/stdc++.h> 
using namespace std; 

string s1, s2;
int dp[200][200];
int min(int x, int y, int z) { 
   return min(min(x, y), z); 
} 
void solve() { 
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.length(), n = s2.length();
    for (int i = 0; i <= m; i++) { 
        for (int j = 0; j <= n; j++) { 
            if (i == 0) dp[i][j] = j; 
            else if (j == 0)  dp[i][j] = i; 
            else if (s1[i - 1] == s2[j - 1])  dp[i][j] = dp[i - 1][j - 1]; 
            else dp[i][j] = 1 + min(dp[i][j - 1],  dp[i - 1][j], dp[i - 1][j - 1]);                  
        } 
    } 
    cout << dp[m][n] << endl;
} 
int main() {
	int t; cin >> t;
    while(t--) solve();
    return 0;
}
// https://www.geeksforgeeks.org/edit-distance-dp-5/
