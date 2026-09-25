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
        ll target = a[n - 1];
        ll ans = 0;
        ll i = n - 2;
        while(i >= 0){
            if(a[i] == target) i--;
            else{
                ans++;
                i -= n - 1 - i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
