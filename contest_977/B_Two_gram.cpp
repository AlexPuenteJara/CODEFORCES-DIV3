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
signed main(){
    fast    
    cin >> n; 
    string s;
    cin >> s;
    unordered_map<string, int> freq;
 
    for(int i = 0; i < n - 1; i++){
        freq[s.substr(i, 2)]++;
    }
 
    string ans;
    int maximum = 0;
    
    for (auto& it : freq){
        if (it.second > maximum){
            maximum = it.second;
           ans = it.first;
        }
    }
    cout<<ans<<endl;
}