#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    for(int qq=0;qq< q;qq++) {
        string s;
        cin >> s;
        int m;
        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<vector<int>> groups;
        while (true) {
            vector<int> pos;
             for (int i = 0; i < m; i++)
                if (b[i] == 0)
                    pos.push_back(i);
            if (pos.empty())
                break;
            groups.push_back(pos);
             for (int i = 0; i < m; i++){
				if (b[i] == 0)
                    b[i] = INT_MAX;
                else
                    for (int pp: pos)
                        b[i] -= abs(i - pp);
			}
                
        }
        map<char, int> cnts;
        for(int i=0; i<s.size();i++)
            cnts[s[i]]++;
        auto j = cnts.rbegin();
        string t(m, '?');
        for (auto g: groups) {
            while (j->second < g.size())
                j++;
            for (int pp: g)
                t[pp] = j->first;
            j++;
        }
        cout << t << "\n";
    }
}