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
        if(n % 2 == 0) cout << -1 << endl;
        else{
            for(ll i = 2; i <= n - 1; i = i + 2) cout << i << " ";
            for(ll i = 1; i <= n; i = i + 2) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}
