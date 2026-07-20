#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n+1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> P(n+1), Q(n+1);
        P[0] = 0; Q[0] = 0;
        for(ll i = 1; i <= n; i++){
            ll v = a[i];
            P[i] = P[i-1]+(v==3?-1:1);
            Q[i] = Q[i-1]+(v==1?1:-1);
        }
        vector<ll> sufMax(n+1, LLONG_MIN);
        sufMax[n-1] = P[n-1];
        for(ll k = n-2; k >= 1; k--){
            sufMax[k] = max(P[k], sufMax[k+1]);
        }
        bool ok = false;
        for(ll i = 1; i <= n-2; i++){
            if(Q[i] >= 0 && sufMax[i+1] >= P[i]){
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
