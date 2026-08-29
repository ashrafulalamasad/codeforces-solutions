#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> cnt(m + 2, 0);
        ll totalSum = 0, maxA = 0;
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            cnt[a]++; totalSum += a;
            if(a > maxA) maxA = a;
        }
        ll L = maxA; vector<ll> suff(L + 2, 0);
        for(ll i = L; i >= 1; i--){
            suff[i] = suff[i + 1] + cnt[i];
        }
        vector<ll> ans(m + 1, 0), val(L + 1, 0);
        ll P = 2, k = 1;
        while(k <= m && P < maxA){
            fill(val.begin(), val.end(), 0);
            ll limit = L / P;
            for(ll d = 1; d <= limit; d++){
                val[d] = cnt[P * d];
            }
            ll B = P - 1, J = min(B, L);
            for(ll j = 1; j <= J; j++){
                ll d = 1;
                for(ll idx = j; idx <= L; idx += j){
                    val[d] += suff[idx];
                    d++;
                }
            }
            ll best = 0;
            for(ll d = 1; d <= L; d++){
                if(val[d] > best){
                    best = val[d];
                }
            }
            ans[k] = best; P *= 2; k++;
        }
        while(k <= m){
            ans[k] = totalSum;
            k++;
        }
        for(ll i = 1; i <= m; i++){
            if(i > 1){
                cout << ' ';
            }
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
