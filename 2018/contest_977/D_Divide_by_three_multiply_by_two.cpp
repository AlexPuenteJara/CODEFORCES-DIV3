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
pair<int,int> a[128];
signed main() {
	cin>>n;
	for(int i = 1;i<=n;i++){
		int j;
		cin>>j;
		for(a[i].second=j;j%3==0;j/=3)
			--a[i].first;
	}
	sort(a+1,a+1+n);
	for(int i = 1;i<=n;i++)cout<<a[i].second<<' ';
	return 0;
}