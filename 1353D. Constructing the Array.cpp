#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n+1);
        priority_queue<pair<ll,ll>> pq;
        pq.push({n, -1});
        for(ll i=1; i<=n; i++){
            auto p = pq.top(); pq.pop();
            ll len = p.first, l = -p.second;
            ll r = l + len - 1;
            ll pos = (len%2? (l+r)/2 : (l+r-1)/2);
            a[pos] = i;
            ll L = pos - l;
            if(L>0) pq.push({L, -l});
            ll R = r - pos;
            if(R>0) pq.push({R, -(pos+1)});
        }
        for(ll i=1;i<=n;i++) cout << a[i] << (i==n? '\n' : ' ');
    }
    return 0;
}
