#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> s(n);
        for(ll i = 0; i < n; i++) cin >> s[i];
        vector<ll> p(n);
        for(ll i = 0; i < n; i++) p[i] = i + 1;
        ll l = 0, r = 0; bool ok = true;
        while(r < n){
            while(r < n - 1 && s[r] == s[r + 1]) r++;
            if(l == r) ok = false;
            else rotate(p.begin() + l, p.begin() + r, p.begin() + r + 1);
            l = r + 1;
            r++;
        }
        if(ok){
            for(ll i = 0; i < n; i++) cout << p[i] << " ";
            cout << endl;
        }else cout << -1 << endl;
    }
    return 0;
}
