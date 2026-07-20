#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MAX = 100100;

bool is_prime[MAX];

void sieve(){
    fill(is_prime, is_prime + MAX, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i * i < MAX; i++){
        if(is_prime[i]){
            for(int j = i * i; j < MAX; j += i){
                is_prime[j] = false;
            }
        }
    }
}

int main()
{
    fast;
    sieve();
    ll n, m; cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    ll ans = 1e18;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(ll i = 0; i < n; i++){
        ll cost = 0;
        for(ll j = 0; j < m; j++){
            ll v = a[i][j];
            while(!is_prime[v]) v++;
            cost += v - a[i][j];
        }
        ans = min(ans, cost);
    }
    for(ll j = 0; j < m; j++){
        ll cost = 0;
        for(ll i = 0; i < n; i++){
            ll v = a[i][j];
            while(!is_prime[v]) v++;
            cost += v - a[i][j];
        }
        ans = min(ans, cost);
    }
    cout << ans << endl;
    return 0;
}
