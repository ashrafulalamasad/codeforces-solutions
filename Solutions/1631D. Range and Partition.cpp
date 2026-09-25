#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, best = 0; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll need = (n + k + 1) / 2;
        vector<ll> s = a;
        sort(s.begin(), s.end());
        ll bestLen = s[(size_t)(need - 1)] - s[0];
        for(ll i = 1; i + need - 1 < n; i++){
            ll curLen = s[(size_t)(i + need - 1)] - s[(size_t)i];
            if(curLen < bestLen){
                bestLen = curLen;
                best = i;
            }
        }
        ll x = s[(size_t)best];
        ll y = s[(size_t)(best + need - 1)];
        cout << x << " " << y << endl;
        vector<ll> b(n);
        for(ll i = 0; i < n; i++){
            if(a[i] >= x && a[i] <= y) b[i] = 1;
            else b[i] = -1;
        }
        ll cur = 0, start = 0, made = 0;
        for(ll i = 0; i < n; i++){
            cur += b[i];
            if(cur > 0 && made + 1 < k && k - (made + 1) <= n - (i + 1)){
                cout << start + 1 << " " << i + 1 << endl;
                made++; start = i + 1; cur = 0;
            }
        }
        cout << start + 1 << " " << n << endl;
    }
    return 0;
}
