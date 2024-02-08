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
signed main() {
    fast
   	cin>>n;
	string s;
	cin>>s;
	int cont=0,ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='x'){
			cont++;
		}else{			
			ans+=max((int)0,cont-2);
			cont=0;
		}
	}
	ans+=max((int)0,cont-2);

	cout<<ans<<"\n";
	return 0;
}