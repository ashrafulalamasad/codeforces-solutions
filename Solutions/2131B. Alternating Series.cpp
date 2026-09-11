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
        for(ll i = 1; i <= n; i++){
            if(i > 1) cout << " ";
            if(i % 2 == 1) cout << -1;
            else if(i == n) cout << 2;
            else cout << 3;
        }
        cout << endl;
    }
    return 0;
}
