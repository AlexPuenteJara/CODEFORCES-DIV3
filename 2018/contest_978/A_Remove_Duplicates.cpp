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
int a[MAXN],b[MAXN],t;

signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
		if(b[a[i]]==0)t++;//cuenta los elementos diferentes de a[i]
		b[a[i]]=i;//guarda el índice del último valor de a[i] en el array 
	}
	cout<<t<<endl;
	for(int i=1;i<=n;i++){
		if(b[a[i]]==i)
			cout<<a[i]<<" ";
	}		
}