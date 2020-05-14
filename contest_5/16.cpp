#include <bits/stdc++.h>
using namespace std;

int arr[1000], n;
int summax() {  
    int max = 0; // khoi tao max = 0
    int maxs[n]; // khoi tao mang chua gia tri max
    for (int i=0; i<n; i++ )  
         maxs[i] = arr[i];  // gan phan tu thu i = bien maxs thu i trong mang
    for (int i=1; i<n; i++ ) {
        for (int j=0; j<i; j++ ) {
            if (arr[i] > arr[j] &&  maxs[i] < maxs[j] + arr[i]) // (1,101,2,3,100,2,5)
                 maxs[i] = maxs[j] + arr[i];                    // 101 > 1 && 101 < 1 + 101
	    }                                                       // cap nhat maxs = 102
	}
    for (int i=0; i<n; i++ ) {
        if ( max < maxs[i] )  max = maxs[i];  // cap nhat max
    }  
    return max;  // tra ve ket qua
}  
int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) cin >> arr[i];
		cout << summax() << endl;
	}
	return 0;
}

