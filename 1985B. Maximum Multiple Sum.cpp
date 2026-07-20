#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 2, best = 0; cin >> n;
        for(ll x = 2; x <= n; x++){
            ll k = n / x;
            ll sum = 1LL * x * k * (k + 1) / 2;
            if(sum > best){
                best = sum;
                ans = x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
