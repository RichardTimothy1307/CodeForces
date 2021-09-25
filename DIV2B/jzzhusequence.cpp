#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int mod = 1e9 + 7;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll int x, y;
	cin >> x >> y;
	ll int n; cin >> n;
	if (n % 6 == 1) {
		ll int a = ((x + mod) % mod);
		cout << a << endl;
	} if (n % 6 == 2) {
		ll int a = ((y + mod) % mod);
		cout << a << endl;
	} if (n % 6 == 3) {
		ll int a = ((x + mod) % mod);
		ll int b = ((y + mod) % mod);
		ll int c = ((b - a) + mod) % mod;
		cout << c << endl;
	} if (n % 6 == 4) {
		ll int a = ((-x + mod) % mod);
		cout << a << endl;
	} if (n % 6 == 5) {
		ll int a = ((-y + mod) % mod);
		cout << a << endl;
	} if (n % 6 == 6) {
		ll int a = ((x + mod) % mod);
		ll int b = ((y + mod) % mod);
		ll int c = ((a - b) + mod) % mod;
		cout << c << endl;
	}
	if (n % 6 == 0) {
		ll int a = ((x + mod) % mod);
		ll int b = ((y + mod) % mod);
		ll int c = ((a - b) + mod) % mod;
		cout << c << endl;
	}

	return 0;
}