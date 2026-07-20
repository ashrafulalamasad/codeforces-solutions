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
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        ll cnt = 0, len = 0;
        for(ll i=0; i<n-1; i++){
            if(a[i] < 2 * a[i+1]) len++;
            else len = 0;
            if(len >= k) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
