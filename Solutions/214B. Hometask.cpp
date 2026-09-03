#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> cnt(10, 0); ll sum = 0;
    for(ll i = 0; i < n; i++){
        ll d; cin >> d; cnt[d]++; sum += d;
    }
    if(cnt[0] == 0){
        cout << -1 << endl;
        return 0;
    }
    ll r = sum % 3;
    if(r != 0){
        bool done = false;
        for(ll d = 1; d <= 9 && !done; d++){
            if(d % 3 == r && cnt[d] > 0){
                cnt[d]--; done = true;
            }
        }
        if(!done){
            ll need = 2, other = 3 - r;
            for(ll d = 1; d <= 9 && need > 0; d++){
                while(d % 3 == other && cnt[d] > 0 && need > 0){
                    cnt[d]--; need--;
                }
            }
            if(need > 0){
                cout << -1 << endl;
                return 0;
            }
        }
    }
    ll rest = 0;
    for(ll d = 1; d <= 9; d++) rest += cnt[d];
    if(rest == 0){
        cout << 0 << endl;
        return 0;
    }
    string ans = "";
    for(ll d = 9; d >= 0; d--) ans += string(cnt[d], '0' + d);
    cout << ans << endl;
    return 0;
}
