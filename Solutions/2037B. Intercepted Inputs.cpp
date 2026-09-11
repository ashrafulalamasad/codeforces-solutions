#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k; cin >> k; vector<ll> f(k + 1, 0);
        for(ll i = 0; i < k; i++){
            ll x; cin >> x;
            if(x <= k) f[x]++;
        }
        ll need = k - 2;
        for(ll i = 1; i <= k; i++){
            if(need % i == 0){
                ll j = need / i;
                if(j >= 1 && j <= k){
                    if(i != j && f[i] > 0 && f[j] > 0){
                        cout << i << " " << j << endl;
                        break;
                    }
                    if(i == j && f[i] > 1){
                        cout << i << " " << j << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
