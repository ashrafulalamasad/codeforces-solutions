#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s; vector<ll> c(26, 0);
        for(ll i = 0; i < n; i++) c[s[i] - 'A']++; ll ans = 0;
        for(ll i = 0; i < 26; i++){
            if(c[i] >= i + 1) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
