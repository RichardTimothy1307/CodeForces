#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum1 += a[i];
	}
	int n1 = n;
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		sum1 -= a[i];
		sum2 += a[i];
		n1--;
		if (sum2 >= sum1) {
			n1++;
			break;
		}

	}
	cout << n1;






	return 0;

}




















 