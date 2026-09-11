#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        ll i = 0;
        for(ll j = 0; j < m && i < n; j++){
            if(a[i] == b[j]) i++;
        }
        cout << i << endl;
    }
    return 0;
}
