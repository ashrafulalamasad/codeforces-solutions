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
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<bool> valid(n + 1, false);
        for(ll l = 0; l < n - 1; l++){
            ll sum = a[l];
            for(ll r = l + 1; r < n; r++){
                sum += a[r];
                if(sum <= n){
                    valid[sum] = true;
                }else{
                    break;
                }
            }
        }
        ll count = 0;
        for(ll i = 0; i < n; i++){
            if(valid[a[i]]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
