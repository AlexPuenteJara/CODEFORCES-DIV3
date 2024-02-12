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
    int t;
	cin>>t;
	while (t--) {
		int k;
		cin>>n>>k;
		string s;
		cin>>s;
		int two_1=0;
		int ans=0;
		int cont=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				two_1++;
				if(two_1==1){
					ans+=(cont/(k+1));
				}
				if(two_1>1){
					ans+=((cont+1)/(k+1)-1);
				}
				cont=0;
			}else{
				cont++;
			}
		}
		if(two_1>0)ans+=(cont/(k+1));
		if(two_1==0)ans+=((cont+k)/(k+1));                        
		cout<<ans<<"\n";	                          	
	}
	return 0;
}