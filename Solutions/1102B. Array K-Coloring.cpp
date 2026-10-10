#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector<vector<ll>> buckets(k);
    vector<ll> res(n);
    for(ll i = 0; i < n; i++){
        buckets[i % k].push_back(a[i].first);
        res[a[i].second] = i % k;
    }
    for(ll i = 0; i < k; i++){
        for(ll j = 0; j < (ll)buckets[i].size() - 1; j++){
            if(buckets[i][j] == buckets[i][j + 1]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for(ll i = 0; i < n; i++) cout << res[i] + 1 << " ";
    cout << endl;
    return 0;
}
