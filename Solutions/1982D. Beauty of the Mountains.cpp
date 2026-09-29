#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        vector<vector<ll>> a(n, vector<ll>(m));
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++) cin >> a[i][j];
        }
        vector<string> type(n);
        for(ll i = 0; i < n; i++) cin >> type[i];
        vector<vector<ll>> prefix(n + 1, vector<ll>(m + 1, 0));
        ll difference = 0;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                if(type[i][j] == '0') difference += a[i][j];
                else difference -= a[i][j];
                ll value = type[i][j] == '0' ? 1 : -1;
                prefix[i + 1][j + 1] = value + prefix[i][j + 1] + prefix[i + 1][j] - prefix[i][j];
            }
        }
        ll divisor = 0;
        for(ll i = k; i <= n; i++){
            for(ll j = k; j <= m; j++){
                ll window = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
                divisor = gcd(divisor, llabs(window));
            }
        }
        bool possible = divisor == 0 ? difference == 0 : difference % divisor == 0;
        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
