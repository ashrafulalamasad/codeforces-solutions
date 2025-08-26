#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1);
        ll sum_a = 0, sum_evens = 0;
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            sum_a += a[i];
            if(i % 2 == 0) sum_evens += a[i];
        }
        ll K = (n + 1) / 2;
        vector<ll> A(K + 1), B(K + 1, 0);
        for(ll i = 1; i <= K; i++){
            A[i] = a[2 * i - 1];
        }
        for(ll i = 1; i < K; i++){
            B[i] = a[2 * i];
        }
        if(n % 2 == 0){
            A[K] = min(a[n - 1], a[n]);
        }
        ll L = LLONG_MAX;
        ll sum_p = 0;
        for(ll i = K; i >= 1; i--){
            ll p = min(L, A[i]);
            if(i > 1) p = min(p, B[i - 1]);
            sum_p += p;
            if(i > 1) L = B[i - 1] - p;
        }
        cout << sum_a - sum_evens - sum_p << endl;
    }
    return 0;
}
