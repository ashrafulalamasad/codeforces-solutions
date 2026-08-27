#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> p(n + 1); ll cnt = 1;
        for(ll j = 0; j < k; j++){
            if(j % 2 == 0){
                for(ll i = j + 1; i <= n; i += k){
                    p[i] = cnt++;
                }
            }else{
                vector<ll> positions;
                for(ll i = j + 1; i <= n; i += k){
                    positions.push_back(i);
                }
                for(ll i = (ll)positions.size() - 1; i >= 0; i--){
                    p[positions[i]] = cnt++;
                }
            }
        }
        for(ll i = 1; i <= n; i++) cout << p[i] << " \n"[i == n];
    }
    return 0;
}
