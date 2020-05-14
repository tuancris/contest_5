#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll Mod = 1e9+7;

ll C[1001][1001];
void solve() {
	int n, k; cin >> n >> k;
	for(int i = 0; i <= 1000; i++) C[0][i] = 1;
	for(int j = 0; j <= 1000; j++){
		for(int i = 1; i <= j; i++){
			C[i][j] = (C[i][j-1] + C[i-1][j-1]) % Mod;
		}
	}
	cout << C[k][n] << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
