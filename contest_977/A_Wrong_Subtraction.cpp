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
	int k;
    cin>>n>>k;
	while(k--){
		if(n%10==0){
			n/=10;
		}else{
			n--;
		}
	}
	cout<<n<<"\n";

	return 0;
}