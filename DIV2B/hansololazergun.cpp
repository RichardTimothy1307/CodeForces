#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;

int all[1000001];


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x0, y0;
	cin >> n >> x0 >> y0;
	set<pair<int, int>> slopes;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int numerator = y0 - b; //all the points in same line will have same slopes
		int denominator = x0 - a; //the denominator of the m(slope)
		int gcdm = __gcd(numerator, denominator); //gcd because to reduce in simplest form
		numerator /= gcdm;
		denominator /= gcdm;
		slopes.insert(MP(numerator, denominator));
	}
	cout << slopes.size() << endl;


	return 0;

}
