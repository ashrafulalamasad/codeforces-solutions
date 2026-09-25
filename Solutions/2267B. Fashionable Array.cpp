#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll freq[101] = {0};
        for(ll i = 0; i < n; i++) freq[a[i]]++;
        ll maxF = 0;
        for(ll v = 1; v <= 100; v++) maxF = max(maxF, freq[v]);
        vector<ll> ans;
        for(ll lvl = 1; lvl <= maxF; lvl++){
            for(ll v = 100; v >= 1; v--){
                if(freq[v] >= lvl) ans.push_back(v);
            }
        }
        for(ll i = 0; i < n; i++){
            if(i > 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
