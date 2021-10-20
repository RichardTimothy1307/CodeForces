#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
vector<int> graph[(int)1000];  //defining array of vectors
int visited[1000];  //for the visited ones
bool flag = false;
void dfs(int pos, int end)
{
	visited[pos] = 1;
	if (pos == end) //base case break when pos==end that means we have reached from where we started
	{
		flag = true;
		return;
	}
	for (int i : graph[pos]) //TODO:iterating over all positions if graph
	{
		if (visited[i] == 0)
		{
			dfs(i, end);    //TODO:recursive call if isnt visited we call dfs again
		}
	}
}


void solve() {
	int n; cin >> n;
	vector<pair<int, int> > vp;
	while (n--)
	{
		int x, a, b; cin >> x >> a >> b;
		if (x == 1)
		{
			for (int i = 0; i < vp.size(); i++)
			{
				if ((vp[i].first < a and a < vp[i].second ) || ( vp[i].first < b and b < vp[i].second)) //!if some interval lies between a and b
				{
					//cout << vp.size() << " " << i << endl;
					graph[vp.size()].push_back(i);
				}
				if ((a < vp[i].first and vp[i].first < b ) || (a < vp[i].second and vp[i].second < b)) //!if  a and b lies between some interval
				{
					//cout << i << " " << vp.size() << endl;
					graph[i].push_back(vp.size());
				}
			}
			vp.push_back(make_pair(a, b));
		}
		else
		{
			a -= 1;
			b -= 1;
			for (int i = 0; i < 110; i++)
			{
				visited[i] = 0;
			}
			flag = false;
			dfs(a, b);
			if (flag)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
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
	solve();



	return 0;


}
