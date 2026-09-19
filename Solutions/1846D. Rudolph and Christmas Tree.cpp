#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    cout << fixed << setprecision(9);
    tc{
        ll n, d, h; cin >> n >> d >> h; vector<ll> y(n);
        for(ll i = 0; i < n; i++) cin >> y[i];
        double single = (double)d * (double)h / 2.0;
        double ans = single * (double)n;
        for(ll i = 0; i + 1 < n; i++){
            ll dy = y[i + 1] - y[i];
            if(dy < h){
                double rem = (double)(h - dy);
                ans = ans - (double)d * rem * rem / (2.0 * (double)h);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
