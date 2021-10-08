#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
int mod = 1e9 + 7;



int number_with_base_n(int n, int k) {
	int answer = 0;
	int p = 1;
	while (k > 0) {
		if (k & 1) {
			answer = (answer + p) % mod;

		}
		k = k >> 1; //right shift
		p = p * n; //p will go from n then n square then n cube 
		p = p % mod;   //since it will increase so mod
		//here for every power we are doing p then p^2 p^3 only when we get set bit we add in answer
	}
	return answer;
}



void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		//cout << fastmodulo(100, 100) << endl;
		cout << number_with_base_n(n, k) << endl;
	}

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
