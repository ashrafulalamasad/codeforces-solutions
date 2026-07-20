#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m, s; cin >> n >> m >> s;
    auto sol = [](ll n, ll s) -> ll {
        if(s >= n){
            return n;
        }
        if(n % s == 0){
            return n;
        }else{
            return (n % s) * ((n - 1) / s + 1);
        }
    };
    ll x = sol(n, s);
    ll y = sol(m, s);
    cout << x * y << endl;
    return 0;
}
