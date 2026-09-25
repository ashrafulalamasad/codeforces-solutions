#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll kadane(vector<ll>& a, ll l, ll r){
    ll maxSum = -1e18, curSum = 0;
    for(ll i = l; i <= r; i++){
        curSum = max(a[i], curSum + a[i]);
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}

int main()
{
    fast;
    tc{
        ll n, tot = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) tot += a[i];
        ll maxProper1 = kadane(a, 0, n - 2);
        ll maxProper2 = kadane(a, 1, n - 1);
        ll maxProper = max(maxProper1, maxProper2);
        if(tot > maxProper) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
