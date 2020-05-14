#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;
void solve() {
  cin >> s;                                          // 6789 = 6+7+8+9+67+78+89+678+789+6789  = 8520
  ll sum = 0, res = 0;                               // sum[0] = 6x1=6, sum[1] = 7x2 + 6x10=74
  for (int i=0; i<s.size(); i++) {                   // sum[3] = 8x3 + 74x10=764, sum[4] = 9x4 + 764x10= 7676     
    sum = sum * 10 + (i + 1) * (s[i] - '0') ;       // sum[0] + sum[1] + sum[2] + sum[3] = 6+74+764+7676 = 8520
    res = res + sum ;                              // sum[i] = num[i]*(i+1) + sum[i-1]*10
  }
  cout << res << endl;
}
int main() {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}









