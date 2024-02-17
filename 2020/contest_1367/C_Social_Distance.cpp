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
		int two_1=0;/*ve cuántas veces apareció 1, con esto veo
		en que situación estoy*/
		int ans=0;//da mi respuesta
		int cont=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				two_1++;
				if(two_1==1){
					ans+=(cont/(k+1));//este es el pedazo inicial
				}
				if(two_1>1){
					ans+=((cont+1)/(k+1)-1);//estos son los pedazos entre unos
				}
				cont=0;//reinicio la cantidad de ceros entre unos
			}else{
				cont++;//cuento la cantidad de ceros entre trozos de cero
			}
		}
		if(two_1>0)ans+=(cont/(k+1));/*cuento la cantidad del trozo final
		solo en el caso de que haya por lo menos un 1 en el string*/
		if(two_1==0)ans+=((cont+k)/(k+1));/*manejo el caso cuando no
		hay ningun 1 en el string*/                       
		cout<<ans<<"\n";	                          	
	}
	return 0;
}