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
        priority_queue<pair<ll, ll>> pq;
        for(ll i = 0; i < n; i++){
            if(a[i] > 0) pq.push({a[i], i});
        }
        vector<pair<ll, ll>> talks;
        while(pq.size() > 1){
            pair<ll, ll> x = pq.top(); pq.pop();
            pair<ll, ll> y = pq.top(); pq.pop();
            talks.push_back({x.second + 1, y.second + 1});
            if(x.first > 1) pq.push({x.first - 1, x.second});
            if(y.first > 1) pq.push({y.first - 1, y.second});
        }
        ll k = talks.size();
        cout << k << endl;
        for(ll i = 0; i < k; i++) cout << talks[i].first << " " << talks[i].second << endl;
    }
    return 0;
}
