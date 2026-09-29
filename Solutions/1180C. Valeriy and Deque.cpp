#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    deque<ll> d; ll maxVal = -1;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        d.push_back(x);
        if(x > maxVal) maxVal = x;
    }
    vector<ll> preA, preB, cyc;
    while(d.front() != maxVal){
        ll first = d.front(); d.pop_front();
        ll second = d.front(); d.pop_front();
        preA.push_back(first);
        preB.push_back(second);
        if(second > first) swap(first, second);
        d.push_front(first);
        d.push_back(second);
    }
    for(ll i = 1; i < n; i++) cyc.push_back(d[i]);
    for(ll i = 0; i < q; i++){
        ll m; cin >> m;
        if(m <= (ll)preA.size()) cout << preA[m - 1] << " " << preB[m - 1] << endl;
        else cout << maxVal << " " << cyc[(m - (ll)preA.size() - 1) % (n - 1)] << endl;
    }
    return 0;
}
