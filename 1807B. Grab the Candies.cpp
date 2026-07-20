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
        ll sum_even = 0, sum_odd = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0) sum_even += a[i];
            else sum_odd += a[i];
        }
        if(sum_even > sum_odd) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
