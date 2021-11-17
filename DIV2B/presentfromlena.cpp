#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors

void solve() {

	int n;
	cin >> n;
	char a[2 * n + 1][2 * n + 1];
	for (int i = 0; i < 2 * n + 1; i++) {
		for (int j = 0; j < 2 * n + 1; j++) {
			a[i][j] = ' ';
		}
	}
	int k = 48;
	int k1 = 48 + n - 1;
	for (int i = 0; i < 2 * n + 1; i++) {
		if (i > n) {

			a[i][n] = (char)k1;
			//cout << a[i][n] << endl;
			k1--;
		}
		else {
			a[i][n] = (char)k;
			//cout << a[i][n] << endl;
			k++;
		}
	}


	for (int i = 0; i < 2 * n + 1; i++) {

		if (a[i][n] != '0') {
			int left = n;
			int right = n;
			int k2 = (int)a[i][n] - 48;

			while (k2 >= 0) {
				//cout << k2 << endl;

				//cout << left << " " << right << endl;

				a[i][left] = (char) k2 + 48;
				a[i][right] =  (char)k2 + 48;
				k2--;
				left--;
				right++;

			}
		}
	}

	for (int i = 0; i < 2 * n + 1; i++) {
		for (int j = 0; j < 2 * n + 1; j++) {
			if (a[i][j] == '0' and j >= n) {
				cout << a[i][j];
				break;
			}
			else {
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}



}

int main() {
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
