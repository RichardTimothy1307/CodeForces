#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int n,a[N][N];deque<int> p[N];
int ptr[N],mat[N];
bool vis[N][N];
void upd(int x)
{
    while (!p[x].empty() && vis[x][p[x].front()]) p[x].pop_front();
    while (!p[x].empty() && vis[x][p[x].back()]) p[x].pop_back();
    if (p[x].empty()) {cout << -1 << endl;exit(0);}
}
inline void del(int x,int y) {vis[x][y] = vis[y][x] = 1;}
void add(int x,int y)
{
    mat[y] = x;
    while (1)
    {
        upd(y);if (p[y].back() != x) del(p[y].back(),y);
        else break;
    }
}
int nxt(int x)
{
    upd(x);int y = p[x].front();p[x].pop_front();
    upd(x);p[x].push_front(y);return mat[p[x][1]];
}
int main ()
{
    ios::sync_with_stdio(false);
    cin >> n;
    if (n & 1) {cout << -1 << endl;return 0;}
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        { if (i != j) cin >> a[i][j],p[i].push_back(j); }
        sort(p[i].begin(),p[i].end(),[&](int x,int y) {return a[i][x] < a[i][y];});
    }
    queue<int> q;for (int i = 1;i <= n;i++) q.push(i);
    while (!q.empty())
    {
        int x = q.front();q.pop();
        while (1)
        {
            upd(x);int y = p[x].front(),z = mat[y];
            if (z && a[y][z] < a[y][x]) assert(0);
            if (z) {mat[y] = 0;q.push(z);}
            add(x,y);break;
        }
    }
    int cur = 1;
    while (1)
    {
        while (cur <= n) { upd(cur);if (p[cur].size() > 1) break;else ++cur;}
        if (cur > n)
        {
            for (int i = 1;i <= n;i++) cout << p[i].front() << endl;
            return 0;
        }
        vector<int> c1,c2;
        int x = cur,y = cur;
        do x = nxt(x),y = nxt(nxt(y));while (x != y);
        do c1.push_back(y),y = nxt(y);while (x != y);
        for (auto &i : c1)
        { int y = p[i][0];c2.push_back(y);mat[y] = 0;del(i,y); }
        for (int i = 0;i < int(c1.size());i++) add(c1[i],c2[(i + 1) % c1.size()]);
    }
    return 0;
}
