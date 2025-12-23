#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> res = {0};
        for(ll i = 1; i <= n; i++){
            vector<ll> temp;
            for(ll val : res) temp.push_back(val * 2 + 1);
            for(ll x = 0; x < (1LL << i); x += 2) temp.push_back(x);
            res = temp;
        }
        for(ll val : res) cout << val << " ";
        cout << endl;
    }
    return 0;
}
