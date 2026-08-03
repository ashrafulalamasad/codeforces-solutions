#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        string s, t; cin >> s >> t;
        vector<vector<ll>> pre(4, vector<ll>(n + 1, 0));
        for(ll i = 0; i < n; i++){
            for(ll k = 0; k < 4; k++) pre[k][i + 1] = pre[k][i];
            if(s[i] == '0' && t[i] == '0') pre[0][i + 1]++;
            else if(s[i] == '1' && t[i] == '1') pre[1][i + 1]++;
            else if(s[i] == '0' && t[i] == '1') pre[2][i + 1]++;
            else pre[3][i + 1]++;
        }
        while(q--){
            ll l, r; cin >> l >> r;
            ll A = pre[0][r] - pre[0][l - 1];
            ll B = pre[1][r] - pre[1][l - 1];
            ll C = pre[2][r] - pre[2][l - 1];
            ll D = pre[3][r] - pre[3][l - 1];
            if(A + B >= abs(C - D)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
