#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        string k, w; cin >> k >> w; vector<ll> pos(26);
        for(ll i = 0; i < 26; i++) pos[k[i] - 'a'] = i;
        ll ans = 0;
        for(ll i = 1; i < (ll)w.size(); i++){
            ans += abs(pos[w[i] - 'a'] - pos[w[i - 1] - 'a']);
        }
        cout << ans << endl;
    }
    return 0;
}
