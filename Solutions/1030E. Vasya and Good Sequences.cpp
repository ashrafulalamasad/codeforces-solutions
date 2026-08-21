#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> b(n);
    ll maxB = 0, cnt[2] = {1, 0}, pref = 0, total = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        b[i] = __builtin_popcountll(x);
        if(b[i] > maxB) maxB = b[i];
        pref ^= (b[i] & 1);
        total += cnt[pref];
        cnt[pref]++;
    }
    ll limit = 2 * maxB;
    ll bad = 0;
    for(ll l = 0; l < n; l++){
        ll sum = 0, mx = 0;
        for(ll r = l; r < n && sum < limit; r++){
            sum += b[r];
            if(b[r] > mx){
                mx = b[r];
            }
            if((sum & 1) == 0 && 2 * mx > sum){
                bad++;
            }
        }
    }
    cout << total - bad << endl;
    return 0;
}
