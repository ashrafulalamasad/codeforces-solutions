#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; ll ans = n;
    vector<ll> x1(n), y1(n), x2(n), y2(n), m(n);
    for(ll i = 0; i < n; i++){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        x1[i] = min(a, c);
        x2[i] = max(a, c);
        y1[i] = min(b, d);
        y2[i] = max(b, d);
        ll s = abs(a - c);
        m[i] = s * s * s;
    }
    for(ll k = 1; k < n; k++){
        ll bad = 0;
        for(ll i = 1; i <= k; i++){
            ll sum = 0, sx = 0, sy = 0;
            for(ll j = i; j <= k; j++){
                sum = sum + m[j];
                sx = sx + m[j] * (x1[j] + x2[j]);
                sy = sy + m[j] * (y1[j] + y2[j]);
            }
            if(sx < 2 * sum * x1[i - 1] || sx > 2 * sum * x2[i - 1]) bad = 1;
            if(sy < 2 * sum * y1[i - 1] || sy > 2 * sum * y2[i - 1]) bad = 1;
        }
        if(bad == 1){
            ans = k; break;
        }
    }
    cout << ans << endl;
    return 0;
}
