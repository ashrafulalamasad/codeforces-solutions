#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> x(n);
    for(ll i=0;i<n;i++) cin >> x[i];
    ll limit = 1e6+1;
    vector<bool> is_prime(limit,true);
    is_prime[0] = is_prime[1] = false;
    for(ll i=2; i*i<limit; i++){
        if(is_prime[i]){
            for(ll j=i*i; j<limit; j+=i) is_prime[j] = false;
        }
    }
    for(auto num:x){
        ll root = sqrt(num);
        if(root*root==num && root<limit && is_prime[root]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
