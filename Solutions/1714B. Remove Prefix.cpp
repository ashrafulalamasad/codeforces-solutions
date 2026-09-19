#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        set<ll> seen; ll keep = 0;
        for(ll i = n - 1; i >= 0; i--){
            if(seen.count(a[i])) break;
            seen.insert(a[i]);
            keep = keep + 1;
        }
        cout << n - keep << endl;
    }
    return 0;
}
