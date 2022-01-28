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

	//TODO:say for every table of numbers the last digit will repeat in cycle
	//TODO: for 3-> (3 6 9 2 5 8 1 4 7 0) we will call this whole one cycle and store it
	//TODO:now we have n and k so inside n (n/k) numbers will be divisible by k
	//TODO: say it is 100 -> for 3 we have 33 numbers we can break 33 into two parts
	//TODO: 33/10-> 3 (3 FULL CYCLES) and 33%10-> 3 (1/3rd CYCLE)
	//TODO:--> 3*(3+6+....+0)+(3+6+9)
	//TODO:we calculated for 0 to 9 3 Cycle and 0 to (n/k)%10 remaining cycles

	int n, m;
	cin >> n >> m;

	int total_numbers = n / m;

	int cycle_sum = 0;

	for (int i = 1; i <= 10; i++) {
		cycle_sum += (i * m) % 10;
	}

	int first_part = (total_numbers / 10) * cycle_sum;

	int second_part = 0;

	for (int i = 0; i <= total_numbers % 10; i++) {
		second_part += (i * m) % 10;
	}

	cout << first_part + second_part << endl;

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