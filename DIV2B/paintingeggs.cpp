#include<bits/stdc++.h>
using namespace std;
#define ll long long
double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	string final = "";
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	int sum_a = 0;
	int sum_b = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		sum_a += a;
		sum_b += b;
		final += 'A';
		v.PB(MP(a, b));
	}
	if (sum_a <= 500) {
		cout << final << endl;
	} else if (sum_b <= 500) {
		final = "";
		for (int i = 0; i < n; i++) {
			final += 'G';
		}
		cout << final << endl;
	} else {
		bool present = false;
		for (int i = 0; i < n; i++) {
			sum_a = abs(sum_a - v[i].first);
			sum_a = abs(sum_a - v[i].second);
			final[i] = 'G';
			if (sum_a <= 500) {
				present = true;
				break;
			}
		}
		if (present) {
			cout << final << endl;
		} else {
			cout << -1 << endl;
		}

	}




	return 0;

}