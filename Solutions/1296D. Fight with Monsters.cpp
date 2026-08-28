#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, a, b, k; cin >> n >> a >> b >> k;
    vector<ll> skips(n);
    for(ll i = 0; i < n; i++){
        ll health; cin >> health;
        ll remaining = (health - 1) % (a + b) + 1;
        skips[i] = (remaining + a - 1) / a - 1;
    }
    sort(skips.begin(), skips.end());
    ll answer = 0;
    for(ll value : skips){
        if(value <= k){
            k -= value;
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}
