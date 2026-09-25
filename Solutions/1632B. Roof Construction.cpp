#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, p = 1; cin >> n;
        while(p * 2 < n) p = p * 2;
        for(ll i = p - 1; i >= 0; i--){
            cout << i;
            cout << " ";
        }
        for(ll i = p; i < n; i++){
            cout << i;
            if(i < n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
