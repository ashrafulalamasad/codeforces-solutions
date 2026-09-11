#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), d(n, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = n; i >= 2; i--){
            ll pos = -1;
            for(ll j = 0; j < i; j++){
                if(a[j] == i){
                    pos = j;
                    break;
                }
            }
            d[i - 1] = (pos + 1) % i;
            ll shifts = d[i - 1];
            if(shifts > 0){
                vector<ll> temp(i);
                for(ll j = 0; j < i; j++){
                    temp[(j - shifts + i) % i] = a[j];
                }
                for(ll j = 0; j < i; j++){
                    a[j] = temp[j];
                }
            }
        }
        for(ll i = 0; i < n; i++){
            cout << d[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
