#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        vector<bool> ok(k + 1, false);
        for(char c : s){
            ll d = c - '0';
            if(d <= k) ok[d] = true;
        }
        bool good = true;
        for(bool b : ok) if(!b) good = false;
        if(good) ans++;
    }
    cout << ans << endl;
    return 0;
}
