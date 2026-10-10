#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s, t; cin >> n >> s >> t;
        vector<ll> a_s, a_t, c_s, c_t;
        for(ll i = 0; i < n; i++){
            if(s[i] == 'a') a_s.push_back(i);
            if(s[i] == 'c') c_s.push_back(i);
            if(t[i] == 'a') a_t.push_back(i);
            if(t[i] == 'c') c_t.push_back(i);
        }
        if(a_s.size() != a_t.size() || c_s.size() != c_t.size()){
            cout << "NO" << endl;
            continue;
        }
        bool ok = true;
        for(ll i = 0; i < a_s.size(); i++){
            if(a_t[i] < a_s[i]) ok = false;
        }
        for(ll i = 0; i < c_s.size(); i++){
            if(c_t[i] > c_s[i]) ok = false;
        }
        ll pos_t = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == 'a' || s[i] == 'c'){
                while(pos_t < n && t[pos_t] == 'b') pos_t++;
                if(pos_t >= n || s[i] != t[pos_t]) ok = false;
                pos_t++;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
