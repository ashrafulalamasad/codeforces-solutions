#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll MAXN = 200000;
    vector<bool> is_prime(MAXN + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(ll i = 2; i * i <= MAXN; i++){
        if(is_prime[i]){
            for(ll j = i * i; j <= MAXN; j += i) is_prime[j] = false;
        }
    }
    vector<ll> primes;
    for(ll i = 2; i <= MAXN; i++) if(is_prime[i]) primes.push_back(i);
    vector<bool> is_semiprime(MAXN + 1, false);
    for(ll g : primes){
        for(ll p : primes){
            if((ll)g * p > MAXN) break;
            is_semiprime[g * p] = true;
        }
    }
    tc{
        ll n; cin >> n; vector<ll> cnt(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        ll ans = 0;
        for(ll s = 2; s <= n; s++){
            if(is_semiprime[s]) ans += cnt[s] * (cnt[s] + 1) / 2;
        }
        ll sum_cnt = 0, sum_sq = 0;
        for(ll p : primes){
            if(p > n) break;
            sum_cnt += cnt[p];
            sum_sq += cnt[p] * cnt[p];
        }
        ans += (sum_cnt * sum_cnt - sum_sq) / 2;
        for(ll g : primes){
            if(g > n) break;
            for(ll p : primes){
                if(g * p > n) break;
                ans += cnt[g] * cnt[g * p];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
