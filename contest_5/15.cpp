#include <bits/stdc++.h>
using namespace std;

int L[100][100][100];
string X, Y, Z;
int m, n, o;
void input() {
	cin >> m >> n >> o;
	cin >> X >> Y >> Z;
}
void solve() { 
    for (int i=0; i<=m; i++) { 
        for (int j=0; j<=n; j++)  { 
            for (int k=0; k<=o; k++) { 
                if (i == 0 || j == 0||k==0)   L[i][j][k] = 0; 
  
                else if (X[i-1] == Y[j-1] && X[i-1]==Z[k-1])  L[i][j][k] = L[i-1][j-1][k-1] + 1; 
                  
                else  L[i][j][k] = max(max(L[i-1][j][k],   L[i][j-1][k]),   L[i][j][k-1]);         
            } 
        } 
    } 
    cout <<  L[m][n][o] << endl;
} 
int main() {
	int t; cin >> t;
	while(t--) {
		input();
		solve() ;
	}
	return 0;
}

