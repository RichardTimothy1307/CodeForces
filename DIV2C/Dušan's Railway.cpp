#include <bits/stdc++.h>
using namespace std;
int n,m,k,head[10010],o=0,fa[10010],sz[10010];
bool vis[10010];
struct edge{
	int to,link;
}e[20010];
vector<int>vec;
vector<pair<int,int> >ans;
void add_edge(int u,int v){
	e[++o]={v,head[u]},head[u]=o;
	e[++o]={u,head[v]},head[v]=o;
}
void add(int u,int v){
	ans.push_back({u,v});
}
void dfs(int u,int pre){
	sz[u]=1,fa[u]=pre;
	for(int i=head[u],v;i;i=e[i].link) if(!vis[v=e[i].to]&&v!=pre){
		dfs(v,u);
		if(sz[v]<=m) sz[u]+=sz[v]; 
	}
	if(sz[u]>m||!pre) vec.push_back(u);
}
void dfs2(int u,int pre,int rt){
	if(u^rt) add(u,rt);
	for(int i=head[u],v;i;i=e[i].link) if(!vis[v=e[i].to]&&v!=pre) dfs2(v,u,rt);
}
void work(int u){
	if(sz[u]<=4) return;
	m=floor(sqrt(sz[u]));
	vec.clear(),dfs(u,0);
	for(int i:vec) for(int j:vec) if(i<j) add(i,j);
	for(int i:vec) vis[i]=1;
	for(int i:vec) dfs2(i,0,i);
	vector<int>nx;
	for(int u:vec) for(int i=head[u],v;i;i=e[i].link) if(!vis[v=e[i].to]&&v!=fa[u]) nx.push_back(v);
	for(int i:nx) work(i);
}
int main(){
	ios::sync_with_stdio(0);
	cin>>n>>k;
	for(int i=1,u,v;i<n;i++) cin>>u>>v,add_edge(u,v);
	sz[1]=n,work(1);
	cout<<ans.size()<<"\n";
	for(auto i:ans) cout<<i.first<<" "<<i.second<<"\n";
}
