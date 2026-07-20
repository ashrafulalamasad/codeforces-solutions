#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MAXN = 200005;
ll cnt[MAXN], diff[MAXN];

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        for(ll i = 0; i <= n + 1; i++){
            cnt[i] = 0;
            diff[i] = 0;
        }
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        ll M = 0;
        while(cnt[M] > 0) M++;
        for(ll m = 0; m <= M; m++){
            diff[cnt[m]]++;
            diff[n - m + 1]--;
        }
        ll s = 0;
        for(ll k = 0; k <= n; k++){
            s += diff[k];
            cout << s << (k == n ? "\n" : " ");
        }
    }
    return 0;
}
