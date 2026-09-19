#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n); ll c[3] = {};
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) c[a[i] % 3]++;
        ll need = n / 3, ans = 0;
        for(ll i = 0; i < 2; i++){
            for(ll j = 0; j < 3; j++){
                if(c[j] > need){
                    ll d = c[j] - need;
                    c[(j + 1) % 3] = c[(j + 1) % 3] + d;
                    c[j] = need;
                    ans = ans + d;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
