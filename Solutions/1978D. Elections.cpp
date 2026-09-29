#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, c; cin >> n >> c; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        ll mx = *max_element(a.begin() + 1, a.end());
        ll winner = a[0] + c >= mx ? 0 : find(a.begin() + 1, a.end(), mx) - a.begin();
        ll sum = c;
        for(ll i = 0; i < n; i++){
            if(i == winner) cout << 0;
            else cout << (sum + a[i] >= mx ? i : i + 1);
            cout << (i + 1 == n ? '\n' : ' ');
            sum += a[i];
        }
    }
    return 0;
}
