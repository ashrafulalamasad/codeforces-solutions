#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> a(n);
        ll sum = 0, even = 0, odd = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] % 2 == 0) even++;
            else odd++;
        }
        while(q--){
            ll type, x; cin >> type >> x;
            if(type == 0){
                sum += even * x;
                if(x % 2 == 1){
                    odd += even;
                    even = 0;
                }
            }else{
                sum += odd * x;
                if(x % 2 == 1){
                    even += odd;
                    odd = 0;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
