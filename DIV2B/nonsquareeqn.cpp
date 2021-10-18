#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair

int s(int x) {
	int ans = 0, rem;
	while (x > 0) {
		rem = x % 10;
		x /= 10;
		ans += rem;
	}

	return ans;
}


void solve() {

	//!x*x+s(x)*x==n  , x<=sqrt(n)+s(x) and x>=sqrt(n)-s(x)
	//!take max digit of x 999999999 == 9*10 ==s(x)=90
	//!we know x limit we know s(x) no we will brute force

	int n;
	cin >> n;
	int ans = sqrt(n);
	for (int i = ans - 100; i <= ans + 100; i++) {
		//cout << i << " " << s(i) << endl;
		if (i <= 0) {
			continue;  //since the absolute value of s(x) is between 1 to 81 we need to handle negative cases
		}
		if ((i * i) + i * (s(i)) == n) {
			cout << i << endl;
			return;
		}
	}

	cout << -1 << endl;
	return;

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
