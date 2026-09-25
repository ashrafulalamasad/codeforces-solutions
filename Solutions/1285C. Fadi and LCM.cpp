#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

int main()
{
    fast;
    ll x; cin >> x;
    ll ansA = 1, ansB = x;
    for(ll i = 1; i <= x / i; i++){
        if(x % i == 0){
            ll a = i, b = x / i;
            if(lcm(a, b) == x){
                if(max(a, b) < max(ansA, ansB)){
                    ansA = a; ansB = b;
                }
            }
        }
    }
    cout << ansA << " " << ansB << endl;
    return 0;
}
