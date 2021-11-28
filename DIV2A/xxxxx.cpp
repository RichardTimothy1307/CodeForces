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

	int n, x;
	cin >> n >> x;

	int a[n];
	int divi = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {

		cin >> a[i];

		sum += a[i];

		if (a[i] % x == 0) {
			divi++;
		}
	}

	if (divi == n) {
		cout << -1 << endl;
		return;
	}
	else {

		if (sum % x != 0) {
			cout << n << endl;
			return;
		}

		else {

			int l = 0;
			int r = n - 1;
			int length = n;
			while (sum % x == 0 and l < n and l<r and r>0) {
				//cout << l << " " << r << endl;

				if ((sum - a[l]) % x != 0) {
					sum -= a[l];
					l++;
					length--;
					break;
				}
				else if ((sum - a[r]) % x != 0) {
					sum -= a[r];
					r--;
					length--;
					break;
				}

				else if ((sum - a[r] - a[l]) % x != 0) {
					sum -= a[r] - a[l];
					l++;
					r--;
					length--;
					break;
				}

				else {
					l++;
					r--;
					length = length - 1;
				}


			}


			cout << length << endl;
			return;



		}









	}


}








signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}