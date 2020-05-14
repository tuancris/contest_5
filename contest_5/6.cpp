#include <bits/stdc++.h>
using namespace std;

// thuat toan manacher 
/*Chen vao xau ban dau cac ki tu #, vi du : abba -> #a#b#b#a#*/
/*void Chenkitu(string &str) {
    string temp;
    for (int i=0; i<str.length(); i++) {
        temp.push_back('#');
        temp.push_back(str[i]);
    }
    temp.push_back('#');
    str = temp;
    return;
}

int Manacher(string &str) {
    Chenkitu(str);
    int lens = str.length(); // lens = do dai cua xau str
    int maxres = 0; // do dai cua xau duoi xung dai nhat
    for (int center=0; center<lens; center++) { // Vi tri trung tam 
        int right = center+1; // Vi tri phai xut phat bat dau tu center
        int res;
        if (str[center] == '#') res = 0; else res = 1;
        while((str[right] == str[2*center-right]) && (2*center-right >= 0) && (right <lens)) {
            if (str[right] != '#') res = res + 2;
            right++;
        }
        if (maxres < res) maxres = res;
    }
    return maxres;
}
int main() {
    int T; cin >> T;
    vector<string> vt;
    for (int i=0; i<T; i++) {
        string temp;
        cin >> temp; // Doc gia tri tu man hinh luu vao temp
        vt.push_back(temp); //
    }
    for (int i=0; i<T; i++)
        cout << Manacher(vt[i]) << endl;
    return 0;
}*/


string s; int n;
void input(){
	cin >> s;
	n = s.size();
}
void solve(){
	int ans = 0;
	for (int i=0; i<n; i++) {
		int L = i, R = i, Len = 1;
		while(L-1 >= 0 && R+1 < n && s[L-1] == s[R+1]){
		      Len += 2; L--; R++;
		}
		ans = max(ans, Len);
	}
	for (int i=1; i<n; i++){
		if (s[i-1] != s[i]) continue;
		int L = i-1, R = i, Len = 2;
		while (L-1 >= 0 && R+1 < n && s[L-1] == s[R+1]){
		       Len += 2; L--; R++;
		}
		ans = max(ans, Len);
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
	  input();
	  solve();
	}
	return 0;
}

