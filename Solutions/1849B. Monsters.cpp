#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<pair<ll, ll>> a(n);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            ll y = x % k;
            if(y == 0) y = k;
            a[i] = {y, i + 1};
        }
        sort(a.begin(), a.end(), [](pair<ll, ll> p, pair<ll, ll> q){
            if(p.first != q.first) return p.first > q.first;
            return p.second < q.second;
        });
        for(ll i = 0; i < n; i++) cout << a[i].second << " ";
        cout << endl;
    }
    return 0;
}
