#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        set<ll> s;
        for(ll i=0;i<n;i++){
            ll x; cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
    return 0;
}
