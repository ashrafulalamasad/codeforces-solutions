#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1), suffix(n + 2, 0);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = n; i >= 1; i--) suffix[i] = suffix[i + 1] + max(0LL, a[i]);
        ll answer = 0;
        for(ll i = 1; i <= n; i++){
            ll current = suffix[i + 1];
            if(i % 2 == 1) current += a[i];
            answer = max(answer, current);
        }
        cout << answer << endl;
    }
    return 0;
}
