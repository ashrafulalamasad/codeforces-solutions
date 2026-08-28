#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string num = to_string(n);
        ll d = num.size(); vector<pair<ll, ll>> ans;
        for(ll a = 1; a <= 10000; a++){
            ll length = d * a;
            for(ll remaining = 1; remaining <= 7 && remaining <= length; remaining++){
                ll b = length - remaining;
                if(b < 1 || b > 10000 || b > n * a) continue;
                string prefix;
                while((ll)prefix.size() < remaining) prefix += num;
                prefix.resize(remaining);
                ll value = stoll(prefix);
                if(value == n * a - b) ans.push_back({a, b});
            }
        }
        cout << ans.size() << endl;
        for(auto [a, b] : ans) cout << a << " " << b << endl;
    }
    return 0;
}
