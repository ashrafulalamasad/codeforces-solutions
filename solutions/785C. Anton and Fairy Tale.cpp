#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, m; cin >> n >> m;
    if(n <= m + 1){
        cout << n << endl;
        return 0;
    }
    unsigned long long S = (unsigned long long)(n - m - 1) * 2ULL;
    ll low = 0, high = 2000000000LL;
    while(low < high){
        ll mid = (low + high) / 2;
        unsigned long long val = (unsigned long long)mid * (unsigned long long)mid + 3ULL * (unsigned long long)mid;
        if(val >= S) high = mid; else low = mid + 1;
    }
    ll k = low;
    ll ans = m + 1 + k;
    cout << ans << endl;
    return 0;
}
