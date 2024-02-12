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
		string b;
		cin>>b;
		cout<<b[0];
		for(int i=0;i<b.size();i++){
			if(i%2==1){
				cout<<b[i];
			}
		}
		cout<<"\n";		
	}
	return 0;
}