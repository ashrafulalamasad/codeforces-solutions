#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll extgcd(ll a, ll b, ll &x, ll &y){
    if(b == 0){
        x = 1; y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main()
{
    fast;
    vector<ll> F(50); F[0] = 0; F[1] = 1;
    for(ll i = 2; i < 50; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    tc{
        ll n, k; cin >> n >> k;
        if(k > 45){
            cout << 0 << endl;
            continue;
        }
        ll A = F[k - 2], B = F[k - 1];
        ll L = (n + A + B - 1) / (A + B), R = n / B;
        if(L > R){
            cout << 0 << endl;
            continue;
        }
        ll x, y; extgcd(B, A, x, y);
        ll r = ((x % A) * (n % A)) % A;
        if(r < 0) r += A;
        ll m_min = 0;
        if(L > r){
            m_min = (L - r + A - 1) / A;
        }
        ll m_max = -1;
        if(R >= r){
            m_max = (R - r) / A;
        }
        ll ans = 0;
        if(m_max >= m_min){
            ans = m_max - m_min + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
