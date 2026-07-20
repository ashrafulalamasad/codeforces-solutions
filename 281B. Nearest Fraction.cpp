#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x, y, n; cin >> x >> y >> n;
    ll best_a = 0, best_b = 1;
    for(ll b=1; b<=n; b++){
        ll a1 = x*b/y;
        ll a2 = a1+1;
        ll n1 = llabs(a1*y - b*x);
        ll n2 = llabs(a2*y - b*x);
        ll a_best = (n1 <= n2) ? a1 : a2;
        ll best_old = llabs(best_a*y - best_b*x);
        ll best_now = llabs(a_best*y - b*x);
        if(best_now * best_b < best_old * b || (best_now * best_b == best_old * b && (b < best_b || (b == best_b && a_best < best_a)))){
            best_a = a_best;
            best_b = b;
        }
    }
    cout << best_a << "/" << best_b << endl;
    return 0;
}
