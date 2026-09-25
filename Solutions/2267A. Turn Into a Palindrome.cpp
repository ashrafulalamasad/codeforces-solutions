#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; char c; cin >> n >> c;
        string s; cin >> s; ll ans = 0;
        for(ll i = 0; i < n / 2; i++){
            ll j = n - 1 - i;
            if(s[i] == s[j]) continue;
            if(s[i] == c || s[j] == c) ans++;
            else ans += 2;
        }
        cout << ans << endl;
    }
    return 0;
}
