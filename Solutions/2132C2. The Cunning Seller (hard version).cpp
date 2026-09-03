#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll> pw(25, 1);
    for(ll i = 1; i < 25; i++){
        pw[i] = pw[i - 1] * 3;
    }
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> cnt(25, 0);
        ll deals = 0, cost = 0;
        for(ll x = 0; n > 0; x++){
            cnt[x] = n % 3;
            n /= 3; deals += cnt[x];
            if(x == 0){
                cost += cnt[x] * 3;
            }else{
                cost += cnt[x] * (pw[x + 1] + x * pw[x - 1]);
            }
        }
        if(deals > k){
            cout << -1 << endl;
            continue;
        }
        ll budget = (k - deals) / 2;
        for(ll x = 20; x >= 1; x--){
            ll take = min(cnt[x], budget);
            cost -= take * pw[x - 1];
            cnt[x] -= take;
            cnt[x - 1] += 3 * take;
            budget -= take;
        }
        cout << cost << endl;
    }
    return 0;
}
