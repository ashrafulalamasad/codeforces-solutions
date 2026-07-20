#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; ll a, b; cin >> s >> a >> b;
    ll n = s.size();
    vector<ll> prefix(n + 1, 0);
    for(ll i = 0; i < n; ++i){
        prefix[i + 1] = (prefix[i] * 10 + (s[i] - '0')) % a;
    }
    ll suffix = 0;
    ll power = 1;
    for(ll i = n - 1; i >= 0; --i){
        suffix = (suffix + (s[i] - '0') * power) % b;
        power = (power * 10) % b;
        if(i > 0 && s[i] != '0' && prefix[i] == 0 && suffix == 0){
            cout << "YES" << endl;
            cout << s.substr(0, i) << endl;
            cout << s.substr(i) << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
