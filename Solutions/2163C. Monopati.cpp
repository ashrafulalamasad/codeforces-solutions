#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll M = 2*n;
        vector<ll> arr1(n+1), arr2(n+1);
        for(ll i = 1; i <= n; i++) cin >> arr1[i];
        for(ll i = 1; i <= n; i++) cin >> arr2[i];
        vector<ll> pmin(n+1), pmax(n+1), smin(n+2,1e9), smax(n+2,0);
        for(ll i = 1; i <= n; i++){
            if(i == 1){
                pmin[i] = arr1[i]; pmax[i] = arr1[i];
            }
            else{
                pmin[i] = min(pmin[i-1], arr1[i]); pmax[i] = max(pmax[i-1], arr1[i]);
            }
        }
        for(ll i = n; i >= 1; i--){
            if(i == n){
                smin[i] = arr2[i]; smax[i] = arr2[i];
            }else{
                smin[i]=min(smin[i+1],arr2[i]); smax[i]=max(smax[i+1],arr2[i]);
            }
        }
        vector<ll> bestL(M+1, 0);
        for(ll k = 1; k <= n; k++){
            ll L = min(pmin[k], smin[k]);
            ll R = max(pmax[k], smax[k]);
            if(R >= 1 && R <= M) bestL[R] = max(bestL[R], L);
        }
        ll ans = 0, cur = 0;
        for(ll r = 1; r <= M; r++){
            cur = max(cur, bestL[r]);
            ans += min(r, cur);
        }
        cout << ans << endl;
    }
    return 0;
}
