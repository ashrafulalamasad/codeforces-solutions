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
        ll sum = 0, cnt = 0, mx = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum = sum + a[i];
            if(a[i] % 2 == 1) cnt = cnt + 1;
            if(a[i] > mx) mx = a[i];
        }
        if(cnt == 0 || cnt == n) cout << mx << endl;
        else cout << sum - cnt + 1 << endl;
    }
    return 0;
}
