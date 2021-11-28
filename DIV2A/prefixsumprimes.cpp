#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors


void solve() {

	int n;
	cin >> n;
	int count_1 = 0, count_2 = 0;
	int total = n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			count_1++;
		}
		else {
			count_2++;
		}
	}

	if (count_2 > 0) {cout << 2 << " "; count_2--;}
	if (count_1 > 0) {cout << 1 << " "; count_1--;}

	for (int i = 0; i < count_2; i++) {
		cout << 2 << " ";
	}

	for (int i = 0; i < count_1; i++) {
		cout << 1 << " ";
	}

	cout << endl;




}







signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}