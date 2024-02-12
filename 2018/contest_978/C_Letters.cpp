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
int a[MAXN];
int pref[200005];
signed main(){
	int m,number,dormitory;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		pref[i+1]=pref[i]+a[i];	
	}

	while(m--){
		cin>>number;
		dormitory=lower_bound(pref+1,pref+n,number)-pref;
		cout<<dormitory<<" "<<number-pref[dormitory-1]<<endl;
	}
}