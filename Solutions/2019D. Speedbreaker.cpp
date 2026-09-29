#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> mn(n + 1, n + 1), mx(n + 1, 0), a(n + 1);
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            mn[a[i]] = min(mn[a[i]], i);
            mx[a[i]] = max(mx[a[i]], i);
        }
        bool possible = true;
        for(ll i = 1; i <= n; i++){
            mn[i] = min(mn[i], mn[i - 1]);
            mx[i] = max(mx[i], mx[i - 1]);
            if(mx[i] - mn[i] >= i){
                possible = false;
                break;
            }
        }
        if(!possible){
            cout << 0 << endl;
            continue;
        }
        ll l = 1, r = n;
        for(ll i = 1; i <= n; i++){
            l = max(l, i - a[i] + 1);
            r = min(r, i + a[i] - 1);
        }
        cout << max(0LL, r - l + 1) << endl;
    }
    return 0;
}
