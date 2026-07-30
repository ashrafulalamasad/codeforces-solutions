#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool is_prime(ll x)
{
    if(x < 2) return false;
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main()
{
    fast;
    vector<ll> fib(51);
    fib[1] = 0; fib[2] = 1;
    for(ll i = 3; i <= 50; i++) fib[i] = fib[i - 1] + fib[i - 2];
    vector<bool> prime(51);
    for(ll i = 1; i <= 50; i++) prime[i] = is_prime(fib[i]);
    tc{
        ll n; cin >> n;
        cout << (prime[n] ? "prime" : "not prime") << endl;
    }
    return 0;
}
