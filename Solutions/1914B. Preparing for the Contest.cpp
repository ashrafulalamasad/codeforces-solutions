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
        for(ll i = n; i >= k + 2; i--){
            cout << i << " ";
        }
        for(ll i = 1; i <= k + 1; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
