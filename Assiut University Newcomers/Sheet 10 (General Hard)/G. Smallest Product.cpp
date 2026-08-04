#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, first = 0; cin >> n;
    long double sum = 0; bool same = true;
    for(ll i = 0; i < n; ++i){
        ll a; cin >> a;
        if(i == 0) first = a;
        else if (a != first) same = false;
        sum += logl((long double)a);
    }
    if(same){
        cout << first + 1;
        return 0;
    }
    ll lo = 1, hi = 10000000001LL;
    while(lo < hi){
        ll mid = (lo + hi) / 2;
        if((long double)n * logl((long double)mid) > sum + 1e-12L){
            hi = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << lo;
    return 0;
}
