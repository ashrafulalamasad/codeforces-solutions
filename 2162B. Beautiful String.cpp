#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n; string s; cin >> n >> s;
    for(int i = 0; i < (1 << n); ++i) {
        string p, x;
        vector<int> indices;
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                p += s[j];
                indices.push_back(j + 1);
            } else {
                x += s[j];
            }
        }
        string p_sorted = p;
        sort(p_sorted.begin(), p_sorted.end());
        string x_rev = x;
        reverse(x_rev.begin(), x_rev.end());
        if (p == p_sorted && x == x_rev) {
            cout << indices.size() << "\n";
            for (size_t k = 0; k < indices.size(); ++k) {
                cout << indices[k] << (k == indices.size() - 1 ? "" : " ");
            }
            cout << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    fast;
    tc {
        solve();
    }
    return 0;
}
