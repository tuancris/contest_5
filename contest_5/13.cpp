#include <bits/stdc++.h>
using namespace std;

int n;
int min(int x, int y, int z) {  // ham tim min cua 3 so           
   return min(min(x, y), z);
}
int ugly() {
   int uglyNum[n]; // khoi tao mang chua so xau          
   int i2 = 0, i3 = 0, i5 = 0; // khoi tao 3 bien chi so mang 
   int next2mul = 2, next3mul = 3, next5mul = 5; // khoi tao 3 uoc so 
   int next = 1; uglyNum[0] = 1; // so xau dau tien = 1
   for (int i=1; i<n; i++) {
      next = min(next2mul, next3mul, next5mul); // y tuong tu 3 so xau ban dau,các so xau sau luon chia het       
      uglyNum[i] = next;                        // cho 1 trong 3 so do,moi buoc tim so xau sau chi can tim min 
      if (next == next2mul) {                   // giua 3 so khi da cap nhat
         i2++; // i2 tang len 1                 // (2,3,5) min = 2 tiep theo (4,3,5) min = 3 roi den (4,6,5)
         next2mul = uglyNum[i2]*2; // cap nhat next2mul  // min bang 4 roi (4,6,10) min = 10
      }
      if (next == next3mul) {
         i3++;             
         next3mul = uglyNum[i3]*3;
      }
      if (next == next5mul) {
         i5++;              
         next5mul = uglyNum[i5]*5;
      }
   }
   return next;       
}
int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n;
		cout << ugly() << endl;
	}
	return 0;
}

