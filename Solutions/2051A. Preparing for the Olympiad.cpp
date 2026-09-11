#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll answer = a[n - 1];
        for(ll i = 0; i + 1 < n; i++){
            answer += max(0LL, a[i] - b[i + 1]);
        }
        cout << answer << endl;
    }
    return 0;
}
