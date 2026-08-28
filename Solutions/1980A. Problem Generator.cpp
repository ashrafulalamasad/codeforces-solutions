#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; string a; cin >> n >> m >> a;
        ll cnt[7] = {0}, ans = 0;
        for(ll i = 0; i < n; i++){
            cnt[a[i] - 'A']++;
        }
        for(ll i = 0; i < 7; i++){
            if(cnt[i] < m) ans += m - cnt[i];
        }
        cout << ans << endl;
    }
    return 0;
}
