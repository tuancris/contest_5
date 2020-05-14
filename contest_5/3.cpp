#include<bits/stdc++.h>
using namespace std;

int n,s,t,A[201],L[40001];
void solve() {
	cin >> n >> s;
	for(int i = 0; i < n; i++)
	    cin >> A[i];
	memset(L,0,sizeof(L));
	L[t] = 0, L[0] = 1;
	for(int i = 0; i <= n; i++){
		for(int t = s; t >= A[i]; t--){
			if(L[t] == 0 && L[t-A[i]] == 1) L[t] = 1;
		}
	}
	if(L[s]) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main(){
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
