#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll odd = 0, even = 0;
        for(ll i = 0; i < n; i++){
            ll value; cin >> value;
            if(value % 2 == 0) even++;
            else odd++;
        }
        cout << (odd > 0 && (even > 0 || n % 2 == 1) ? "YES" : "NO") << endl;
    }
    return 0;
}
