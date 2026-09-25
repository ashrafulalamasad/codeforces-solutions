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
        cout << 2 * n - 3 << endl;
        for(ll i = 1; i <= n; i++){
            if(i > 1) cout << i << " " << 1 << " " << i << endl;
            if(i + 1 < n) cout << i << " " << i + 1 << " " << n << endl;
        }
    }
    return 0;
}
