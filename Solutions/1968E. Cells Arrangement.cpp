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
        if(n == 2){
            cout << 1 << " " << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }else{
            for(ll i = 1; i <= n - 2; i++) cout << 1 << " " << i << endl;
            cout << 2 << " " << n << endl;
            cout << n << " " << n << endl;
        }
    }
    return 0;
}
