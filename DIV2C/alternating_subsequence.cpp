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
	int a[n];
	int start = 0; //0 for pos and 1 for neg
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0 and a[i] < 0) {
			start = 1;
		}
	}

	if (start == 1) { //starting with neg
		int subsections = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] < 0 and a[i + 1] > 0) {
				subsections += 2;
			}
		}
		//cout << subsections << endl;
		if (subsections == 0) {
			int mini = INT_MIN;
			for (int i = 0; i < n; i++) {
				if (a[i] > mini) {
					mini = a[i];
				}
			}

			cout << mini << endl;
		}
		else {
			vector<int> ans;
			int k = 0;
			int x = n;
			while (x >= 0) {

				int mini = INT_MIN;
				int maxi = -1;

				while (a[k] < 0 and k < n) {
					int exec = 0;
					if (a[k] > mini) {
						mini = a[k];
						k++;
						exec = 1;
					}
					if (exec == 0) {
						k++;
					}
				}
				if (mini != INT_MIN) {
					ans.push_back(mini);

				}

				while (a[k] > 0 and k < n) {
					int exec = 0;
					if (a[k] > maxi) {
						maxi = a[k];
						k++;
						exec = 1;
					}
					if (exec == 0) {
						k++;
					}
				}
				if (maxi != -1) {
					ans.push_back(maxi);
				}

				x--;

			}
			int sumi = 0;
			for (auto it : ans) {
				sumi += it;
			}
			cout << sumi << endl;
		}

	}
	else {
		int subsections = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > 0 and a[i + 1] < 0) {
				subsections += 2;
			}
		}
		//cout << subsections << endl;
		if (subsections == 0) {
			int maxi = -1;
			for (int i = 0; i < n; i++) {
				if (a[i] > maxi) {
					maxi = a[i];
				}
			}

			cout << maxi << endl;
		}
		else {
			vector<int> ans;
			int k = 0;
			int x = n;
			while (x >= 0) {

				int mini = INT_MIN;
				int maxi = -1;

				while (a[k] > 0 and k < n) {
					int exec = 0;
					if (a[k] > maxi) {
						maxi = a[k];
						k++;
						exec = 1;
					}
					if (exec == 0) {
						k++;
					}
				}
				if (maxi != -1) {
					ans.push_back(maxi);
				}


				while (a[k] < 0 and k < n) {
					int exec = 0;
					if (a[k] > mini) {
						mini = a[k];
						k++;
						exec = 1;
					}
					if (exec == 0) {
						k++;
					}
				}
				if (mini != INT_MIN) {
					ans.push_back(mini);

				}



				x--;

			}

			int sumi = 0;
			for (auto it : ans) {
				sumi += it;
			}
			cout << sumi << endl;
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
