#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair



void solve() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int min_moves = 0;
	int k = 0;
	for (int i = 0; i < n ; i++) {

		int max_moves_in_range = 0;
		if (a[i] > a[i + 1]) {
			for (int j = i + 1; j < n; j++) {
				max_moves_in_range = max(max_moves_in_range, a[i] - a[j]);  //TODO:Say we have two peaks it is calculating the max difference between the first peak and leading numbers
				if (a[j] < a[j + 1]) {
					k = j + 1;
					break;
				}

			} 
			i = k - 1;  //!Update the i with new peak where the while loop broke else TLE and WA
		

		}
		min_moves += max_moves_in_range; //*Add all the max moves between the peaks 
	}
	cout << min_moves << endl;

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
