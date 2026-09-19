#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    set<ll> s;
    for(ll i = 1; i * i * i <= 1000000000000LL; i++) s.insert(i * i * i);
    tc{
        ll x; cin >> x; ll ok = 0;
        for(ll i = 1; i * i * i < x; i++){
            if(s.find(x - i * i * i) != s.end()) ok = 1;
        }
        if(ok == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
