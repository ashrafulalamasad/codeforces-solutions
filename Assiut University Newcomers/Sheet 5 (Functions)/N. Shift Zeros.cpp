#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void shiftZeros(vector<ll>& a){
    vector<ll> res;
    for(ll x : a){
        if(x != 0) res.push_back(x);
    }
    while(res.size() < a.size()) res.push_back(0);
    for(ll x : res) cout << x << " ";
    cout << endl;
}

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    shiftZeros(a);
    return 0;
}
