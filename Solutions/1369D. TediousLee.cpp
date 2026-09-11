#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll P = 1000000007;
const ll N = 2000000;
vector<ll> E(N + 1, 0), d(N + 1, 0);

int main()
{
    fast;
    for(ll s = 2; s <= N; s++){
        ll m1 = E[s - 1] + (d[s - 1] > 0);
        ll m2 = E[s - 2] + (d[s - 2] > 0);
        E[s] = (m1 + 2 * m2) % P;
        d[s] = 1 - (d[s - 1] > 0) - 2 * (d[s - 2] > 0);
    }
    tc{
        ll n; cin >> n;
        if(n <= 2){
            cout << 0 << endl;
        }else{
            ll s = n - 1;
            ll M = (E[s] + (d[s] > 0)) % P;
            cout << 4 * M % P << endl;
        }
    }
    return 0;
}
