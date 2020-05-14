#include <bits/stdc++.h> 
using namespace std; 
// x = insert, y = remove, z = copy
int dp[1001];
int n, x, y, z;
void input() {
	cin >> n;
	cin >> x >> y >> z;
}
int solve() { 
    if (n == 0)  return 0; 
    if (n == 1)  return x; 
    memset(dp, 0, sizeof(dp)); 
    dp[1] = x;
    for(int i=1; i<=n; i++) { 
        if(i%2 == 0)  dp[i] = min(dp[i-1] + x, dp[i/2] + z); 
        
        else dp[i] = min(dp[i-1] + x, dp[(i+1)/2] + y + z);                 
    } 
    return dp[n]; 
} 
int main() {
	int t; cin >> t;
	while(t--) {
		input();
		cout << solve() << endl;
	}
	return 0;
}
// https://www.geeksforgeeks.org/minimum-time-write-characters-using-insert-delete-copy-operation/
