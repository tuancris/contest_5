#include<bits/stdc++.h>
using namespace std;
                                    // arr[] = 3, 2, 7, 10 
int summax(int arr[],int n) {       //            0     (3     2    7    10)
	int incl = arr[0];             //            excl   incl  arr[1]
	int excl = 0;                             
	for(int i=1; i<n; i++) {
		int temp = incl;                       
		incl = max(temp, arr[i]+excl);          
		excl = temp;                           
	}
	return incl;                                                                                                                                                      
}
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; int arr[n];
		for(int i=0; i<n; i++) cin >> arr[i];
		cout << summax(arr,n) << endl;
	}
	return 0; 
}
