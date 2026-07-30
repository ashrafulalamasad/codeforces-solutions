#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool is_prime(ll x){
    if(x < 2) return false;
    for(ll i = 2; i * i <= x; i++) if(x % i == 0) return false;
    return true;
}

int main()
{
    fast;
    tc{
        ll x; cin >> x;
        ll r = sqrt(x);
        if(r * r == x && is_prime(r)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
