#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x, k; cin >> x >> k;
        if(x % k != 0){
            cout << 1 << endl;
            cout << x << endl;
        }else{
            cout << 2 << endl;
            cout << 1 << " " << x-1 << endl;
        }
    }
    return 0;
}
