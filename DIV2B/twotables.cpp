#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair



void solve() {

	int na, ma;
	cin >> na >> ma;
	int a[na][ma];
	for (int i = 0; i < na; i++) {
		string s1; cin >> s1;
		for (int j = 0; j < ma; j++) {
			a[i][j] = s1[j] - '0';
			//cin >> a[i][j];
		}
	}
	int nb, mb;
	cin >> nb >> mb;
	int b[nb][mb];
	for (int i = 0; i < nb; i++) {
		string s2; cin >> s2;
		for (int j = 0; j < mb; j++) {
			b[i][j] = s2[j] - '0';
			//cin >> b[i][j];
		}
	}

	//TODO:i+x and j+y should be valid and lie between 0 and row and 0 and column
	//!so x can lie from -50 to +50 since i can be 50 and x can be -50 so i+x=0
	int ans_x, ans_y, ans = 0;
	for (int x = -50; x <= 50; x++) {
		for (int y = -50; y <= 50; y++) {
			int every_overlap_factor = 0;
			//*now checking Aij * B(i+x)(j+y) (for all valid i+x and j+y in B)
			for (int i = 0; i < na; i++) {
				for (int j = 0; j < ma; j++) {
					if (i + x >= 0 and i + x < nb and j + y >= 0 and j + y < mb) {
						every_overlap_factor += a[i][j] * (b[i + x][j + y]);
					}
				}
			}

			if (every_overlap_factor > ans) {
				//cout << every_overlap_factor << endl;
				ans = every_overlap_factor;
				ans_x = x;
				ans_y = y;
			}
		}
	}
	cout << ans_x << " " << ans_y << endl;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();



	return 0;


}
