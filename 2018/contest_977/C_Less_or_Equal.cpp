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
vector<int> a;
signed main() {
    fast
    int k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		a.push_back(val);
	}

	sort(a.begin(),a.end());

	if(k==0){
			if(a[0]==1){
				cout<<-1<<"\n";
			}else{
				cout<<a[0]-1<<"\n";
			}		
		}else{
			if(a[k-1]==a[k]){
				cout<<-1<<"\n";
			}else{
				cout<<a[k-1]<<"\n";		
			}
	}
	return 0;
}