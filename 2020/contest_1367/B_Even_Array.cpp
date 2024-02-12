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
		cin>>n;
		int cont=0,cant_par=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0)cant_par++;	
			if((a[i]-i)%2!=0)cont++;
		}

		if(cant_par==(n+1)/2){
			cout<<cont/2<<"\n";
		}else{
			cout<<-1<<"\n";
		}


	}
	return 0;
}