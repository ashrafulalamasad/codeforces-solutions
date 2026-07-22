#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, y; cin >> x >> y;
        ll sum = 0;
        ll a = min(x, y), b = max(x, y);
        for(ll i = a + 1; i < b; i++){
            if(i % 2 != 0) sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
