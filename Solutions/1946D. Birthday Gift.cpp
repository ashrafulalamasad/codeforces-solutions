#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x; x++;
        vector<ll> a(n); ll ans = -1;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 30; i >= 0; i--){
            vector<ll> b; bool open = false;
            for(ll j = 0; j < a.size(); j++){
                if(!open) b.push_back(a[j]);
                else b.back() ^= a[j];
                if(a[j] & (1LL << i)) open = !open;
            }
            if((x & (1LL << i)) == 0){
                if(open){
                    cout << ans << endl;
                    break;
                }
                a = b;
            }else{
                if(!open) ans = max(ans, (ll)b.size());
            }
            if(i == 0) cout << ans << endl;
        }
    }
    return 0;
}
