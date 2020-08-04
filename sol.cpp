#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s, ns;
	cin >> s;
	int c, h, e, f;
	c = h = e = f = 0;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == 'C') c++;
		else if(s[i] == 'H' && h < c) h++;
		else if(s[i] == 'E' && e < h) e++;
		else if(s[i] == 'F' && f < e) f++;
	}
	cout << f << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
