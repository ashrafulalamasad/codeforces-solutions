#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(i == j && i == n / 2) cout << 'X';
            else if(i == j) cout << '\\';
            else if(i + j == n - 1) cout << '/';
            else cout << '*';
        }
        cout << endl;
    }
    return 0;
}
