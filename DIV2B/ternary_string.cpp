#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors


void solve() {

	//*12222213333332  Sliding Window technique

	//*start with l=0 and r=0 and we maintain a count array
	//* we do count[r]++  if(count[l]>1) we increase l say at 1 it is 1
	//* now we have encountered another 1 now we increase l and make it to 2 we
	//*already Four 2s we increase l until it is one but if we encounter another number with 1 as count we stop
	//*so at every point if all has one as count we take the length and take minimum of it



	string s;
	cin >> s;
	int count[4] = {}; //0 1 2 and 3
	int n = s.length();
	int l = 0;
	int mini = n + 1; //the upper limit of answer

	for (int r = 0; r < n; r++) {

		int curr_no = s[r] - '0';

		count[curr_no]++;

		while (count[s[l] - '0'] > 1) {
			count[s[l] - '0']--; //!since we are leaving that behind
			l++;  //!move forward since we already have its occurence ahead

		}

		if (count[1]  and count[2]  and count[3] ) {    //! pattern ==>> 122223,133332,211113,233331,311112,32221
			mini = min(mini, r - l + 1); //!0 based indexing
		}

	}
	if (mini == n + 1) {
		mini = 0;
	}
	cout << mini << endl;


}




signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}
