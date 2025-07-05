#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAXN = 5005;

ll f[2][MAXN];

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        for(ll j = 0; j <= n; j++){
            f[0][j] = 0;
        }
        f[0][0] = 1;
        ll pre = 0, cur = 1;
        for(ll i = 1; i <= n; i++){
            for(ll j = 0; j <= i; j++){
                f[cur][j] = 0;
            }
            for(ll j = 0; j < i; j++){
                ll now = f[pre][j];
                f[cur][j + 1] = (f[cur][j + 1] + now) % m;
                f[cur][j] = (f[cur][j] + (n - i + 1) * (j + 1) * now % m) % m;
            }
            swap(pre, cur);
        }
        ll ans = 0;
        for(ll j = 0; j <= n; j++){
            ans = (ans + f[pre][j]) % m;
        }
        cout << ans << endl;
    }
    return 0;
}
