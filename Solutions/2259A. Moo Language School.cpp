#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, ans = 0; cin >> n >> k;
        string s; cin >> s;
        for(ll i = 0; i < n / k; i++){
            ll has = 0;
            for(ll j = i * k; j < (i + 1) * k; j++) if(s[j] == '0') has = 1;
            if(has == 0) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
