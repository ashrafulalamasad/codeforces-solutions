#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll C(ll n, ll k){
    if (k < 0 || k > n) return 0;
    if (k > n - k) k = n - k;
    ll res = 1;
    for(ll i=1; i<=k; i++){
        res = res * (n - k + i) / i;
    }
    return res;
}

int main()
{
    fast;
    ll n; cin >> n;
    ll a = C(n + 4, 5);
    ll b = C(n + 2, 3);
    cout << a * b << endl;
    return 0;
}
