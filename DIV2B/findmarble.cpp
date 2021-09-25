#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, s, t;
	cin >> n >> s >> t;
	int a[n + 1];
	int p[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	int count = 0;
	while (s != t && p[s] != 0)    //we will check if in this cycle whether s is equal to t or not other wise s will come to s that p[s]=0
	{
		int x = p[s];      //giving x the new position which s will go to
		p[s] = 0;	//making the prev one zero
		s = x;		//giving s the new position
		count += 1;   //incrementing the count
	}
	if (s == t) {
		cout << count << endl;
	} else {
		cout << "-1" << endl;
	}
	return 0;
}