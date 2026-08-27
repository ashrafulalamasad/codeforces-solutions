#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n;
    while(n > 1){
        ll p = 1;
        while((p << 1) < n){
            p <<= 1;
        }
        ll k = 0, temp = p;
        while(temp > 1){
            temp >>= 1;
            k++;
        }
        ans += p;
        ans += k * (p >> 1);
        n -= p;
    }
    cout << ans << endl;
    return 0;
}
