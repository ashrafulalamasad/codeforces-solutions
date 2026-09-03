#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, h; cin >> n >> m >> h;
        vector<ll> orig(n + 1), val(n + 1, 0), stamp(n + 1, 0);
        for(ll i = 1; i <= n; i++) cin >> orig[i];
        ll reset = 0;
        for(ll i = 1; i <= m; i++){
            ll b, c; cin >> b >> c;
            ll cur = (stamp[b] > reset ? val[b] : orig[b]);
            if(cur + c > h){
                reset = i;
            }else{
                val[b] = cur + c; stamp[b] = i;
            }
        }
        for(ll i = 1; i <= n; i++){
            cout << (stamp[i] > reset ? val[i] : orig[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}
