#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b; cin >> n >> a >> b;
        if(b <= a) cout << n * a << endl;
        else{
            ll k = min(n, b - a + 1);
            cout << (b - k + 1 + b) * k / 2 + (n - k) * a << endl;
        }
    }
    return 0;
}
