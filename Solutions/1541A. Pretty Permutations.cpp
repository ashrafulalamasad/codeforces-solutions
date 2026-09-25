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
        if(n % 2){
            for(ll i = 1; i <= n - 3; i += 2) cout << i + 1 << " " << i << " ";
            cout << n << " " << n - 2 << " " << n - 1 << " ";
        }else{
            for(ll i = 1; i <= n; i += 2) cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }
    return 0;
}
