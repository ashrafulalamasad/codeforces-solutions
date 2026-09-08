#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, d = -1; cin >> n;
        for(ll dd = 1; dd <= 31; dd++){
            ll maxSum = (1LL << (dd + 1)) - 1;
            ll minSum = dd + 1;
            if(minSum <= n && n <= maxSum){
                d = dd;
                break;
            }
        }
        if(d == -1){
            cout << -1 << endl;
            continue;
        }
        vector<ll> b(d + 1); b[0] = 1;
        ll remaining = n - 1;
        for(ll i = 1; i <= d; i++){
            ll remSteps = d + 1 - i;
            ll lb = max(b[i-1], (remaining + ((1LL << remSteps) - 1) - 1) / ((1LL << remSteps) - 1));
            ll ub = min(2 * b[i-1], remaining / remSteps);
            if(lb > ub) lb = ub;
            b[i] = ub;
            remaining -= b[i];
        }
        cout << d << endl;
        for(ll i = 1; i <= d; i++){
            cout << b[i] - b[i-1] << (i == d ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
