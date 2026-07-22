#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll even = 0, odd = 0, pos = 0, neg = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(x % 2 == 0) even++;
        else odd++;
        if(x > 0) pos++;
        else if(x < 0) neg++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}
