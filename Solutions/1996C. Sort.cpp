#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; string a, b; cin >> n >> q >> a >> b;
        vector<vector<ll>> prefA(26, vector<ll>(n + 1, 0));
        vector<vector<ll>> prefB(26, vector<ll>(n + 1, 0));
        for(ll i = 0; i < n; i++){
            for(ll c = 0; c < 26; c++){
                prefA[c][i + 1] = prefA[c][i];
                prefB[c][i + 1] = prefB[c][i];
            }
            prefA[a[i] - 'a'][i + 1]++;
            prefB[b[i] - 'a'][i + 1]++;
        }
        for(ll i = 0; i < q; i++){
            ll l, r, inter = 0; cin >> l >> r;
            for(ll c = 0; c < 26; c++){
                ll cntA = prefA[c][r] - prefA[c][l - 1];
                ll cntB = prefB[c][r] - prefB[c][l - 1];
                inter += min(cntA, cntB);
            }
            cout << (r - l + 1) - inter << endl;
        }
    }
    return 0;
}
