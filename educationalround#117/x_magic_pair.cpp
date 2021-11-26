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
int a, b, x;
bool ok;

void findans(int a, int b) {


	if (a == x or b == x) {
		ok = true;
		return;
	}

	if ((a - x) % b == 0) {
		ok = true;
		return;
	}

	if (a % b == 0)return;

	if (a % b < x and b < x)return; //!because the further we go the value will decrease

	findans(b, a % b);


}



void solve() {



	cin >> a >> b >> x; 
        //TODO: either do a,a-b or a-b,b say a>b ---> (a-b,b)----> (a-2*b,b)--> (a-k*b,b)
	   //TODO: a-k*b=x  ---> x is given and k is unknown   a-x=k*b therefore (a-x)%b==0
		//TODO: a>b -->  a=Q*b + remainder ===> remainder=a-Q*b also remainder=a%b
		//TODO:so b,a%b is nothing but the same thing
	ok = false;

	if (x > max(a, b)) {

		//!theres no way we can subtract and goto X

		cout << "NO" << endl;
		return;



	}
	else if (min(a, b) == x or max(a, b) == x or (max(a, b) - x) % min(a, b) == 0) {
		cout << "YES" << endl;
		return;
	}

	else {

		findans(a, b);
		if (ok == true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}






	}




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