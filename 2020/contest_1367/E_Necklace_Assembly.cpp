#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
int MOD=1e9+7;
const int inf=1e9;
const int MAXN=3e5+5;
int a[MAXN];
int gcd(int a, int b) {
	if(a < b) swap(a, b);
	if(b == 0) return a;
	return gcd(b, a%b);
}
 
signed main() {
	fast
	int t; cin >> t;
	while(t--) {
		int n, k; 
		cin >> n >> k;
		string s; 
		cin >> s;
		vector<int> cnt(26, 0);
 
		for(int i = 0; i < n; i++)
			cnt[s[i]-'a']++;
		
		int ans = 0;
		for(int i = 1; i <= n; i++) {
			int g = gcd(i, k);
			int l = i/g;
 
			int temp = 0;
			for(int j = 0; j < 26; j++)
				temp += cnt[j]/l;
 
			if(temp >= g) ans = max(ans, i);
		}
		cout << ans << "\n";
	}	
	return 0;
}