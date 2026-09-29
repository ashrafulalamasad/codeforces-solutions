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
        ll minimum = *min_element(a.begin(), a.end());
        ll answer = 0;
        for(ll value : a) if(value > minimum) answer++;
        cout << answer << endl;
    }
    return 0;
}
