#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, s; cin >> n >> s;
        vector<ll> a(n); ll total = 0;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            total += a[i];
        }
        if(total < s){
            cout << -1 << endl;
            continue;
        }
        ll l = 0, sum = 0, mx = 0;
        for(ll r=0; r<n; r++){
            sum += a[r];
            while(sum > s) sum -= a[l++];
            if(sum == s) mx = max(mx, r - l + 1);
        }
        cout << n - mx << endl;
    }
    return 0;
}
