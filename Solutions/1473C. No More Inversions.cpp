#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll m = 2 * k - n;
        for(ll i = 1; i < m; i++){
            cout << i << " ";
        }
        for(ll i = k; i >= m; i--){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
