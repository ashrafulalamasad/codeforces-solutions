#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m)), b(n, vector<ll>(m));
        for(ll i = 0; i < n; i++){
            string s; cin >> s;
            for(ll j = 0; j < m; j++) a[i][j] = s[j] - '0';
        }
        for(ll i = 0; i < n; i++){
            string s; cin >> s;
            for(ll j = 0; j < m; j++) b[i][j] = s[j] - '0';
        }
        for(ll i = 0; i < n - 1; i++){
            for(ll j = 0; j < m - 1; j++){
                ll need = (b[i][j] - a[i][j] + 3) % 3;
                if(need == 0) continue;
                a[i][j] = (a[i][j] + need) % 3;
                a[i + 1][j + 1] = (a[i + 1][j + 1] + need) % 3;
                a[i][j + 1] = (a[i][j + 1] + 2 * need) % 3;
                a[i + 1][j] = (a[i + 1][j] + 2 * need) % 3;
            }
        }
        ll ok = 1;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++) if(a[i][j] != b[i][j]) ok = 0;
        }
        if(ok == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
