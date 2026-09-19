#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, pos = 0; string s, rev; cin >> n >> s;
        while(pos < n && s[pos] == '0') pos = pos + 1;
        string t = s.substr(pos); ll m = (ll)t.size();
        vector<ll> a(m); ll total = 0, pref = 0, carry = 0;
        for(ll i = 0; i < m; i++) a[i] = t[m - 1 - i] - '0';
        for(ll i = 0; i < m; i++) total = total + a[i];
        for(ll j = 0; j < m; j++){
            ll col = total - pref + carry;
            rev.push_back(char('0' + col % 10));
            carry = col / 10; pref = pref + a[j];
        }
        while(carry > 0){
            rev.push_back(char('0' + carry % 10));
            carry = carry / 10;
        }
        reverse(rev.begin(), rev.end());
        cout << rev << endl;
    }
    return 0;
}
