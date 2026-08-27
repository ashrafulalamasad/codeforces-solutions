#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MAX = 2000005;
ll spf[MAX];
bool used_prime[MAX];

void sieve(){
    for(ll i = 2; i < MAX; i++) spf[i] = i;
    for(ll i = 2; i * i < MAX; i++){
        if(spf[i] == i) {
            for(ll j = i * i; j < MAX; j += i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

bool can_use(ll x){
    ll temp = x;
    while(temp > 1){
        ll p = spf[temp];
        if(used_prime[p]) return false;
        while(temp % p == 0) temp /= p;
    }
    return true;
}

void mark_used(ll x){
    while(x > 1){
        ll p = spf[x];
        used_prime[p] = true;
        while(x % p == 0) x /= p;
    }
}

int main()
{
    fast;
    sieve(); ll n; cin >> n; vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    bool greedy = false; ll next_prime = 2;
    for(ll i = 0; i < n; i++){
        if(!greedy){
            if(can_use(a[i])){
                b[i] = a[i];
                mark_used(a[i]);
            }else{
                ll x = a[i] + 1;
                while(!can_use(x)) x++;
                b[i] = x; mark_used(x);
                greedy = true;
            }
        }else{
            while(next_prime < MAX && (spf[next_prime] != next_prime || used_prime[next_prime])) next_prime++;
            b[i] = next_prime;
            used_prime[next_prime] = true;
            next_prime++;
        }
    }
    for(ll i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << b[i];
    }
    cout << endl;
    return 0;
}
