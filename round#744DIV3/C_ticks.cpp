#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair


void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	vector < vector<char>> a(n, vector<char> (m)); //outside one size n and inside one with m
	vector<vector<int>> visited(n, vector<int> (m)); //one for visited points
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = n - 1; i >= 1; i--) { //starting from last row becuz we will encounter bigger ticks first
		for (int j = 1; j < m - 1; j++) { //starting from 1 becuz and going till m-2 because first and last element wont become ticks
			if (a[i][j] == '*') {
				int len = 0;
				int a1 = i - 1; int l1 = j - 1; int l2 = j + 1;
				vector<pair<int, int>> v;
				while (a1 >= 0 and l1 >= 0 and l2 < m) {
					if (a[a1][l1] == '*' and a[a1][l2] == '*') {
						len++;
						v.PB(MP(a1, l1));
						v.PB(MP(a1, l2));
						a1--;   //going to the upper left
						l1--;   //going left sideways
						l2++;	//going up right sideways
						continue; //if we get then continue
					}
					break;

				}
				if (len < k and visited[i][j] == 0) { //length is less than k and is not a part of bigger tick it is new
					cout << "NO" << endl;
					return;
				}
				if (len >= k) {


					//putting all the visited point here
					for (auto it : v) {
						//cout << it.first << " ";
						//cout << it.second; cout << endl;
						visited[it.first][it.second] = 1; //putting all the visited points here
					}
				}
				visited[i][j] = 1; //also marking the centre of it as visited
			}



		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == '*' and !visited[i][j]) {
				//cout << visited[i][j] << " " << i << j << endl;
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {

		solve();
	}

	return 0;


}
