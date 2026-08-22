#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll m, k; cin >> m >> k;
    const ll LIMIT = 1000000000000000000LL;
    const ll INF = 4000000000000000000LL;
    vector<vector<ll>> comb(65, vector<ll>(65, 0));
    comb[0][0] = 1;
    for(ll i = 1; i <= 64; i++){
        comb[i][0] = 1;
        for(ll j = 1; j <= i; j++){
            if(comb[i - 1][j - 1] > INF - comb[i - 1][j]){
                comb[i][j] = INF;
            }else{
                comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
            }
        }
    }
    auto count_less = [&](ll N, ll r) -> ll {
        if(N <= 0 || r < 0 || r > 64){
            return 0;
        }
        ll ans = 0, ones = 0;
        for(ll bit = 62; bit >= 0; bit--){
            if((N >> bit) & 1LL){
                if(r >= ones){
                    ll need = r - ones;
                    if(need <= bit){
                        if(ans > INF - comb[bit][need]){
                            ans = INF;
                        }else{
                            ans += comb[bit][need];
                        }
                    }
                }
                ones++;
                if(ones > r){
                    break;
                }
            }
        }
        return ans;
    };
    if(m == 0){
        cout << 1 << endl;
        return 0;
    }
    ll r = k - 1;
    ll low = 1, high = LIMIT;
    while(low < high){
        ll mid = low + (high - low) / 2;
        if(count_less(mid, r) >= m){
            high = mid;
        }else{
            low = mid + 1;
        }
    }
    cout << low << endl;
    return 0;
}
