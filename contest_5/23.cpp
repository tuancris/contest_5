#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
ll dp[1000], arr[1000], n;
void solve() { 
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++) 
        dp[i] = 1; 
    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(arr[i] >= arr[j] && dp[i] < dp[j] + 1) 
                dp[i] = dp[j] + 1; 
        }
    }
    int max = 0; 
    for(int i=0; i<n; i++) {
        if(max < dp[i])  max = dp[i]; 
    }
    cout <<  (n - max) << endl; 
} 
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
// https://www.geeksforgeeks.org/minimum-insertions-sort-array/
  
