#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, ans = 0; cin >> n;
    ll a[] = {5,4,3,2,1};
    for(ll i=0; i<5; i++){
        ans += n/a[i];
        n = n%a[i];
    }
    cout << ans << endl;
    return 0;
}
