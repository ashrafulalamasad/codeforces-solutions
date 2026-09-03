#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    bool possible = false;
    for(ll mask = 0; mask < (1LL << n); mask++){
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            if(mask & (1LL << i)){
                sum += a[i];
            }else{
                sum -= a[i];
            }
        }
        if(sum % 360 == 0){
            possible = true;
        }
    }
    if(possible){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
