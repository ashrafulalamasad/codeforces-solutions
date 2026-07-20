#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        if(k >= n){ cout << 1 << '\n'; continue; }
        ll best = 1;
        for(ll i = 1; i * i <= n; i++){
            if(n % i == 0){
                ll d1 = i, d2 = n / i;
                if(d1 <= k) best = max(best, d1);
                if(d2 <= k) best = max(best, d2);
            }
        }
        cout << (n / best) << '\n';
    }
    return 0;
}
