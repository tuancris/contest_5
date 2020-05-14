#include <bits/stdc++.h>
using namespace std;

int arr[100], n;
int bitonic() { 
    int maxs = 0;  
    int maxt[n], maxg[n]; // khoi tao 1 mang tong tang va 1 mang tong giam
    for(int i=0; i<n; i++) { 
        maxt[i] = arr[i]; // gan cac phan tu thu i = gia tri max tang thu i
        maxg[i] = arr[i]; // tuong tu cho mang giam
    } 
    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(arr[i] > arr[j] && maxt[i] < maxt[j] + arr[i]) 
                maxt[i] = maxt[j] + arr[i]; 
        }
    }
    for (int i=n-2; i>=0; i--) {
        for (int j=n-1; j>i; j--) {
            if (arr[i] > arr[j] && maxg[i] < maxg[j] + arr[i]) 
                maxg[i] = maxg[j] + arr[i]; 
        }
    }
    for (int i = 0; i < n; i++) 
        maxs = max(maxs, (maxt[i] + maxg[i] - arr[i])); 
    return maxs; 
} 
int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) cin >> arr[i];
		cout << bitonic() << endl;
	}
	return 0;
}

