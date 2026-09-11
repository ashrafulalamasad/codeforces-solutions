#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<vector<ll>> C(33, vector<ll>(33, 0));
    for(ll i = 0; i <= 32; i++){
        C[i][0] = 1;
        for(ll j = 1; j <= i; j++) C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
    }
    tc{
        ll n, k; cin >> n >> k;
        ll d = 0;
        while((2LL << d) <= n) d++;
        ll ans = 0;
        for(ll j = 1; j <= d; j++){
            for(ll c = 1; c <= j; c++){
                if(c + j - 1 > k) ans += C[j - 1][c - 1];
            }
        }
        if(d + 1 > k) ans++;
        cout << ans << endl;
    }
    return 0;
}
