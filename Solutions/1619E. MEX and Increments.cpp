#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> cnt(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        vector<ll> ans(n + 1);
        vector<ll> surplus;
        surplus.reserve(n);
        ll cost = 0;
        bool possible = true;
        for(ll i = 0; i <= n; i++){
            if(!possible){
                ans[i] = -1;
            }else{
                ans[i] = cost + cnt[i];
            }
            if(i == n){
                break;
            }
            if(possible){
                if(cnt[i] > 0){
                    for(ll c = 1; c < cnt[i]; c++){
                        surplus.push_back(i);
                    }
                }else{
                    if(surplus.empty()){
                        possible = false;
                    }else{
                        ll last = surplus.back();
                        surplus.pop_back();
                        cost += i - last;
                    }
                }
            }
        }
        for(ll i = 0; i <= n; i++){
            if(i > 0){
                cout << ' ';
            }
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
