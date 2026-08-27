#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<pair<ll, ll>> queries(n); ll limit = 1;
    for(ll i = 0; i < n; i++){
        cin >> queries[i].first >> queries[i].second;
        limit = max(limit, queries[i].second - queries[i].first);
    }
    vector<ll> smallestPrime(limit + 1);
    for(ll i = 2; i <= limit; i++){
        if(smallestPrime[i] == 0){
            smallestPrime[i] = i;
            if(i * i <= limit){
                for(ll j = i * i; j <= limit; j += i){
                    if(smallestPrime[j] == 0) smallestPrime[j] = i;
                }
            }
        }
    }
    for(auto [x, y] : queries){
        ll difference = y - x;
        if(gcd(x, difference) != 1){
            cout << 0 << endl;
            continue;
        }
        if(difference == 1){
            cout << -1 << endl;
            continue;
        }
        ll answer = LLONG_MAX;
        while(difference > 1){
            ll prime = smallestPrime[difference];
            answer = min(answer, prime - x % prime);
            while(difference % prime == 0) difference /= prime;
        }
        cout << answer << endl;
    }
    return 0;
}
