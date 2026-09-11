#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0, odd = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++){
            sum = sum + a[i];
            if(i % 2 == 0){
                odd = odd + a[i];
            }
        }
        if(sum % n != 0){
            cout << "NO" << endl;
        }else{
            ll avg = sum / n;
            ll cnt = (n + 1) / 2;
            if(odd == cnt * avg){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
