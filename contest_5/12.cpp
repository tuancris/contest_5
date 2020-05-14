#include<bits/stdc++.h>
#define ll long long
const ll Mod = 1e9+7; 
using namespace std;

ll n, k, P;
ll tinh() { 
    if(k > n) return P = 0;
	else {
		int P = 1; 
        for (int i=0; i<k; i++) 
            P = (P*(n-i)) % Mod ; 
        return P ;
	} 
} 
int main() { 
    int t; cin >> t;
    while(t--) {
    	cin >> n >> k;
    	cout << tinh() << endl;
	}
    return 0; 
} 



