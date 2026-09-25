#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n), zero, one;
        for(ll i = 0; i < n; i++) cin >> p[i];
        string s; cin >> s;
        for(ll i = 0; i < n; i++){
            if(s[i] == '0') zero.push_back(i);
            else one.push_back(i);
        }
        sort(zero.begin(), zero.end(), [&](ll x, ll y) {
            return p[x] < p[y];
        });
        sort(one.begin(), one.end(), [&](ll x, ll y) {
            return p[x] < p[y];
        });
        vector<ll> q(n); ll cur = 1;
        for(ll i = 0; i < (ll)zero.size(); i++){
            q[zero[i]] = cur;
            cur = cur + 1;
        }
        for(ll i = 0; i < (ll)one.size(); i++){
            q[one[i]] = cur;
            cur = cur + 1;
        }
        for(ll i = 0; i < n; i++){
            if(i > 0) cout << " ";
            cout << q[i];
        }
        cout << endl;
    }
    return 0;
}
