#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair


void solve() {
	//*Two player plays and their probality is a/b and c/d prob that 1st wins
	//*we know that a can win in 1st game 3rd game 5th game and so on
	//* a/b+(1-a/b)*(1-c/d)(a/b)+(1-a/b)*(1-c/d)(1-a/b)(1-c/d)(a/b)+......
	//*This is a infinite GP with a=a/b and r=(1-a/b)*(1-c/b)
	//*sum of infinite GP a/1-r
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double numerator_a = (a / b);
	double r = (1 - (a / b)) * (1 - (c / d));
	double denominator_1_minus_r = 1 - r;
	double probability = numerator_a / denominator_1_minus_r;
	cout.precision(8); cout << fixed; cout << probability << endl;

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
