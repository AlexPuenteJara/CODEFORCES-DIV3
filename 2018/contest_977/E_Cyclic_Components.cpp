#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
int n;
int MOD=1e9+7;
const int inf=1e9;
const int MAXN=3e5+5;
vector<int>graph[MAXN];
bool vis[MAXN];
bool g;
void dfs(int x){
	vis[x]=1;
	if (graph[x].size()!=2)g=0;
	for (int i:graph[x])
		if (!vis[i])dfs(i);
}
signed main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int ans=0;
	for (int i=1;i<=n;i++){
		g=1;
		if (!vis[i]){
			dfs(i);
			if (g){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}