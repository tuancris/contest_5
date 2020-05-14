#include <boost/multiprecision/cpp_int.hpp> 
using BigInt = boost::multiprecision::cpp_int;
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		int n ; cin >> n;
		BigInt C = 1;
        for (int i = 0; i < n; ++ i) {
             C = C * 2 * (2 * i + 1) / (i + 2);
        }
        cout << C << endl;
	}
	return 0;
}

