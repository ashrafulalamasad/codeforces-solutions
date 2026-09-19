#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, H, M; cin >> n >> H >> M;
        ll cur = H * 60 + M, best = 24 * 60;
        for(ll i = 0; i < n; i++){
            ll h, m; cin >> h >> m;
            ll t = h * 60 + m;
            ll diff = (t - cur + 24 * 60) % (24 * 60);
            if(diff < best) best = diff;
        }
        cout << best / 60 << " " << best % 60 << endl;
    }
    return 0;
}
