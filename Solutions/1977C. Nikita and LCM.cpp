#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n;
        vector<ll> a(n); map<ll, ll> cnt;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        ll L = 1;
        for(ll i = 0; i < n; i++){
            L = L / __gcd(L, a[i]) * a[i];
            if(L > 1000000000) break;
        }
        if(L > 1000000000 || cnt.find(L) == cnt.end()){
            cout << n << endl;
            continue;
        }
        ll M = L; vector<ll> divs;
        for(ll i = 1; i * i <= M; i++){
            if(M % i == 0){
                divs.push_back(i);
                if(i != M / i) divs.push_back(M / i);
            }
        }
        for(ll g : divs){
            if(cnt.count(g)) continue;
            ll l = 1, c = 0;
            bool any = false;
            for(auto& [x, k] : cnt){
                if(g % x == 0){
                    any = true;
                    l = l / __gcd(l, x) * x;
                    c += k;
                }
            }
            if(any && l == g) ans = max(ans, c);
        }
        cout << ans << endl;
    }
    return 0;
}
