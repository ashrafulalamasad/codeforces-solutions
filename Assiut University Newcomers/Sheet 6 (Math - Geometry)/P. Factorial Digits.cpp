#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    double digits = 0;
    for(ll i = 2; i <= n; i++){
        digits += log10(i);
    }
    ll result = (ll)digits + 1;
    cout << "Number of digits of " << n << "! is " << result << endl;
    return 0;
}
