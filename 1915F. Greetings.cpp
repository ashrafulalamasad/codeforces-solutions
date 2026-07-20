#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll merge_count(vector<ll>& arr, ll l, ll r) {
    if(r - l <= 1) return 0;
    ll mid = (l + r) / 2;
    ll cnt = merge_count(arr, l, mid) + merge_count(arr, mid, r);
    vector<ll> tmp;
    ll i = l, j = mid;
    while(i < mid && j < r) {
        if(arr[i] <= arr[j]) tmp.push_back(arr[i++]);
        else { cnt += mid - i; tmp.push_back(arr[j++]); }
    }
    while(i < mid) tmp.push_back(arr[i++]);
    while(j < r) tmp.push_back(arr[j++]);
    for(ll k = l; k < r; k++) arr[k] = tmp[k - l];
    return cnt;
}

int main()
{
    fast;
    tc {
        ll n; cin >> n;
        vector<pair<ll,ll>> p(n);
        for(auto& [a, b] : p) cin >> a >> b;
        sort(p.begin(), p.end());
        vector<ll> b(n);
        for(ll i = 0; i < n; i++) b[i] = p[i].second;
        cout << merge_count(b, 0, n) << endl;
    }
    return 0;
}
