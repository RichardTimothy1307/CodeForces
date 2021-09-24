#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	//n, k, l, c, d, p, nl, np

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int toast_from_drink, toast_from_lime, toast_from_salt;

	int drinks = k * l; toast_from_drink = drinks / nl;
	int limes = c * d; toast_from_lime = limes;
	int salt = p;	toast_from_salt = salt / np;

	int toast; //= min(toast_from_salt, toast_from_lime, toast_from_drink) / n;

	if (toast_from_salt <= toast_from_drink) {
		toast = min(toast_from_salt, toast_from_lime) / n;
	} else {
		toast = min(toast_from_drink, toast_from_lime) / n;
	}

	cout << toast << endl;




	return 0;
}