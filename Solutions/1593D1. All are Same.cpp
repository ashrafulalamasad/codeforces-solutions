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
        ll answer = 0;
        for(ll i = 1; i < n; i++) answer = gcd(answer, abs(a[i] - a[0]));
        cout << (answer == 0 ? -1 : answer) << endl;
    }
    return 0;
}
