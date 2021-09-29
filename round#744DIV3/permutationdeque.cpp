#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;




int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		deque<int> d;
		d.push_back(a[0]);

		for (int i = 1; i < n; i++) {
			int first = d.front();
			if (a[i] <= first) {
				d.push_front(a[i]);
			} else {
				d.push_back(a[i]);
			}
		}
		while (d.empty() == false)
		{
			cout << d.front() << " ";
			d.pop_front();
		}
		cout << endl;
	}


	return 0;

}
