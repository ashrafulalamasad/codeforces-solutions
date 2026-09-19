#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n), b(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<ll> prefA(n + 1, 0), prefB(m + 1, 0);
        for(ll i = 0; i < n; i++) prefA[i + 1] = prefA[i] + a[i];
        for(ll i = 0; i < m; i++) prefB[i + 1] = prefB[i] + b[i];
        ll na = n / 2, nb = m / 2;
        vector<ll> bestA(na + 1, 0), bestB(nb + 1, 0);
        for(ll x = 1; x <= na; x++) bestA[x] = prefA[n] - prefA[n - x] - prefA[x];
        for(ll y = 1; y <= nb; y++) bestB[y] = prefB[m] - prefB[m - y] - prefB[y];
        ll kmax = min({n, m, (n + m) / 3});
        cout << kmax << endl;
        if(kmax > 0){
            for(ll k = 1; k <= kmax; k++){
                ll L = max(0LL, 2 * k - m);
                ll R = min({k, n - k});
                ll lo = L, hi = R;
                while(lo < hi){
                    ll mid = (lo + hi) / 2;
                    ll dA = bestA[mid + 1] - bestA[mid];
                    ll dB = bestB[k - mid] - bestB[k - mid - 1];
                    if(dA > dB) lo = mid + 1;
                    else hi = mid;
                }
                ll fk = bestA[lo] + bestB[k - lo];
                if(k > 1) cout << " ";
                cout << fk;
            }
            cout << endl;
        }
    }
    return 0;
}
