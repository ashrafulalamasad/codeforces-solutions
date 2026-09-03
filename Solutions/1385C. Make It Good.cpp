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
        ll i = n - 1;
        while(i > 0 && a[i - 1] >= a[i]) i--;
        while(i > 0 && a[i - 1] <= a[i]) i--;
        cout << i << endl;
    }
    return 0;
}
