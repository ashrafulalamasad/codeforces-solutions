#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll> pw(25, 1);
    for(ll i = 1; i < 25; i++){
        pw[i] = pw[i - 1] * 3;
    }
    tc{
        ll n, ans = 0; cin >> n;
        for(ll x = 0; n > 0; x++){
            ll d = n % 3; n /= 3;
            if(x == 0){
                ans += d * 3;
            }else{
                ans += d * (pw[x + 1] + x * pw[x - 1]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
