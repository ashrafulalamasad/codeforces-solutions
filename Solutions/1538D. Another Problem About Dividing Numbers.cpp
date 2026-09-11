#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll limit = 31623; vector<ll> primes;
    vector<bool> comp(limit + 1, false);
    for(ll i = 2; i <= limit; i++){
        if(!comp[i]){
            primes.push_back(i);
            if(i * i <= limit){
                for(ll j = i * i; j <= limit; j += i){
                    comp[j] = true;
                }
            }
        }
    }
    auto countFactors = [&](ll x) -> ll {
        ll cnt = 0;
        for(ll p : primes){
            if(p * p > x){
                break;
            }
            while(x % p == 0){
                cnt++;
                x /= p;
            }
        }
        if(x > 1){
            cnt++;
        }
        return cnt;
    };
    tc{
        ll a, b, k; cin >> a >> b >> k;
        if(k == 1){
            if(a != b && (a % b == 0 || b % a == 0)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            ll total = countFactors(a) + countFactors(b);
            if(total >= k){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
