#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> z;
        ll digits = 0;
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            ll len = to_string(a).size();
            digits += len;
            ll tz = 0;
            while(a % 10 == 0){
                a /= 10;
                tz++;
            }
            if(tz > 0) z.push_back(tz);
        }
        sort(z.rbegin(), z.rend());
        for(ll i = 0; i < (ll)z.size(); i += 2) digits -= z[i];
        if(digits >= m + 1) cout << "Sasha" << endl;
        else cout << "Anna" << endl;
    }
    return 0;
}
