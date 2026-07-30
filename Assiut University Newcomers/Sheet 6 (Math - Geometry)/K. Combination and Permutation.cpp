#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll factory(ll num){
    ll result = 1;
    for(ll i = num; i >= 2; i--){
        result *= i;
    }
    return result;
}

ll NPR(ll n, ll r){
    return factory(n) / factory(n - r);
}

ll NCR(ll n, ll r){
    return factory(n) / (factory(n - r) * factory(r));
}

int main()
{
    fast;
    ll n, r; cin >> n >> r;
    ll ncr = NCR(n, r);
    ll npr = NPR(n, r);
    cout << ncr << " " << npr << endl;
    return 0;
}
