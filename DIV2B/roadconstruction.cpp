#include<bits/stdc++.h>
using namespace std;
#define ll long long
double pi = 3.1415926536;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	set<int> s;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		s.insert(a);
		s.insert(b);
	}
	int free;
	for (int i = 1; i <= n; i++) {
		if (s.count(i) == 0) {
			free = i;
			break;
		}
	}
	cout << n - 1 << endl;
	for (int i = 1; i <= n; i++) {
		if (i != free) {
			cout << free << " " << i << endl;

		}
	}

	return 0;
}