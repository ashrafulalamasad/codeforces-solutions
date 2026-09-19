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
        vector<ll> twos, threes, sixes, rest;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x % 6 == 0) sixes.push_back(x);
            else if(x % 2 == 0) twos.push_back(x);
            else if(x % 3 == 0) threes.push_back(x);
            else rest.push_back(x);
        }
        for(ll x : twos) cout << x << " ";
        for(ll x : rest) cout << x << " ";
        for(ll x : threes) cout << x << " ";
        for(ll x : sixes) cout << x << " ";
        cout << endl;
    }
    return 0;
}
