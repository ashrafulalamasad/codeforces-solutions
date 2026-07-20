#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, L; cin >> n >> k >> L; vector<ll> a(n);
        for(ll i = 0; i < n; ++i) cin >> a[i];
        k *= 2; L *= 2;
        for(ll i = 0; i < n; ++i) a[i] *= 2;
        ll tim = 0, now = 0;
        if(a[0] != 0) tim += a[0];
        now = k;
        for(ll i = 1; i < n; ++i){
            if(a[i] <= now){
                ll pos = min(a[i] + tim, now);
                if (now - pos < k) now = pos + k;
            }else{
                if(a[i] - now <= tim){
                    now += k;
                }else{
                    ll dis = a[i] - now - tim;
                    tim += dis / 2;
                    now += dis / 2;
                    now += k;
                }
            }
        }
        if(now < L) tim += (L - now);
        cout << tim << endl;
    }
    return 0;
}
