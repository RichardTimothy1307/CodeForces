#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair



void solve() {

	int n; int m; int s; int f;


	cin >> n; cin >> m; cin >> s; cin >> f; //*go from s to f  //*spies from 1 to n left to right //m steps
	string ans = ""; //passing x-1-> L and x+1-> R and keeping X
	vector<int> steps;
	steps.PB(0);
	while (m--) {
		//cout << 1 << endl;

		int t, l, r;
		cin >> t >> l >> r;
		//!Middle steps between t(i-1) and t(i)
		//cout << t << " " << steps[steps.size() - 1] << endl;
		int extrasteps = t - steps[steps.size() - 1] - 1;
		while (extrasteps > 0) {
			if (s < f) {
				ans += 'R';
				s++;
			} else if (s > f) {
				ans += 'L';
				s--;
			}
			extrasteps--;
			if (s == f) {  //!break as we got answer cause unnecessary for loop will run and TLE
				break;
			}
		}

		steps.PB(t);
		if (s < f) {
			if (s < l and s + 1 < l)   //!IF S is on right of l then S+1 has to be 
			{

				//cout << s << endl;
				ans += 'R';
				s++;
			}
			else if (s > r and s + 1 > r) { //!similarly for s if left of r then s+1 also , not in bet^n
				ans += 'R';
				s++;
			}
			else {
				ans += 'X';
			}



		} else if (s > f) {    //!for L also 
			if (s < l and s - 1 < l)
			{

				//cout << s << endl;
				ans += 'L';
				s--;
			}
			else if (s > r and s - 1 > r) {
				ans += 'L';
				s--;
			}
			else {
				ans += 'X';
			}

		}

		if (ans == "") {  //!if after an iteration it is empty so we add X
			ans += 'X';
		}

		if (s == f) {  //break to save TLE
			break;
		}


	}
    //!These Passing is independent of M so after steps also they will continue 
	//cout << s << f << endl;
	if (s < f) {
		while (s != f) {
			ans += 'R';
			s++;
		}
	}
	else if (f < s) {
		while (s != f) {
			ans += 'L';
			s--;
		}
	}
	cout << ans << endl;

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
