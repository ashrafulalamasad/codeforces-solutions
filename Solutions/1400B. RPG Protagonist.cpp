#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll p, f; cin >> p >> f;
        ll cntS, cntW; cin >> cntS >> cntW;
        ll s, w; cin >> s >> w;
        if(s > w){
            swap(s, w);
            swap(cntS, cntW);
        }
        ll ans = 0;
        for(ll s1 = 0; s1 <= min(p / s, cntS); s1++){
            ll w1 = min(cntW, (p - s * s1) / w);
            ll s2 = min(cntS - s1, f / s);
            ll w2 = min(cntW - w1, (f - s * s2) / w);
            ans = max(ans, s1 + s2 + w1 + w2);
        }
        cout << ans << endl;
    }
    return 0;
}
