#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll countDistinct(vector<ll>& a){
    set<ll> s;
    for(ll i = 0; i < a.size(); i++){
        s.insert(a[i]);
    }
    return s.size();
}

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    cout << countDistinct(a) << endl;
    return 0;
}
