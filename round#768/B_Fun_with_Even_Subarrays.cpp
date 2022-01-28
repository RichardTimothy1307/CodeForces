#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e9 + 7;
//vector<int> graph[(int)1000];  //defining array of vectors



void solve() {

	int n;
	cin >> n;

	int a[n];
	for (auto &it : a)cin >> it;


	int count = 0;

	int i = n - 1;

	int k = a[n - 1];

	//1 2 3 4 5  --> first we make 4=5  now we can make 2 3 == 4 5 //directly jump to 1

	while (i >= 0) {

		if (a[i] == k) {
			i--;
		}
		else {
			//cout << i << endl;
			count++;
			i = i - (n - 1 - i); //1 2 3 4 4  3 is not equal so we can directly make 2 3 == 4 4 and jump to 3-(5-3)-> 1
			// all elements from n-i+1 to n become a[n]
			//cout << i << endl;
		}


	}


	cout << count << endl;


}



int32_t main() {
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