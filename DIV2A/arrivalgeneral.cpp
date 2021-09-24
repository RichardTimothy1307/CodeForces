#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	auto first = v.begin();
	auto end = v.end();
	end--;
	int x = *first;
	int y = *end;
	int swap1 = 0, swap2 = 0;
	int max_index, min_index;
	for (int i = 0; i < n; i++) {
		if (a[i] == y) {
			max_index = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == x) {
			min_index = i;
			break;
		}
	}

	/*cout << max_index << " " << min_index;*/
	if (max_index > min_index) {
		cout << (max_index - 1) + (n - min_index) - 1 << endl;
	}
	else {
		cout << (max_index - 1) + (n - min_index) << endl;
	}


	return 0;

}




















 