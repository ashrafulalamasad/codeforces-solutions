#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, d; cin >> n >> k >> d; vector<ll> a(n), v(k);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < k; i++) cin >> v[i];
        ll answer = 0;
        ll limit = min(d, 2 * n + 1);
        for(ll day = 0; day < limit; day++){
            ll score = 0;
            for(ll i = 0; i < n; i++) if(a[i] == i + 1) score++;
            score += (d - day - 1) / 2;
            answer = max(answer, score);
            for(ll i = 0; i < v[day % k]; i++) a[i]++;
        }
        cout << answer << endl;
    }
    return 0;
}
