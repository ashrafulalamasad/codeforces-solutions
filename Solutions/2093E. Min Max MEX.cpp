#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool possible(const vector<ll>& a, ll k, ll mex){
    if(mex == 0) return true;
    vector<ll> seen(mex, 0);
    ll segment = 1, missing = mex, count = 0;
    for(ll value : a){
        if(value < mex && seen[value] != segment){
            seen[value] = segment;
            missing--;
        }
        if(missing == 0){
            count++;
            if(count == k) return true;
            segment++;
            missing = mex;
        }
    }
    return false;
}

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll& value : a) cin >> value;
        ll low = 0, high = n / k;
        while(low < high){
            ll mid = (low + high + 1) / 2;
            if(possible(a, k, mid)) low = mid;
            else high = mid - 1;
        }
        cout << low << endl;
    }
    return 0;
}
