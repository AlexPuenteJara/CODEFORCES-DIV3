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
int b[MAXN];
signed main() {
    fast    
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int razon,vari,zz,mini=inf,k;
	if(n==1 or n==2){
		cout<<0<<"\n";
	}else{
		for(int i=b[0]-1;i<=b[0]+1;i++){		
			for(int j=b[1]-1;j<=b[1]+1;j++){
				vari=abs(i-b[0]);
				razon=j-i;//segundo elemento - primer elemento
				for( k=1;k<n;k++){
					if(abs(b[k] - (i + k*razon))>1){
						break;
					}else{
						vari+=abs(b[k]-(i + k*razon));
					}
				}

				if(k==n){
					mini=min(mini,vari);	
				}
			}			
		}
		if(mini==inf){
			cout<<-1<<"\n";
		}else{
			cout<<mini<<"\n";
		}

	}		
	return 0;
}