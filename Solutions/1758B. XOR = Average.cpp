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
        if(n % 2 == 1){
            for(ll i = 0; i < n; i++) cout << 1 << " ";
            cout << endl;
        }else{
            cout << 1 << " " << 3 << " ";
            for(ll i = 0; i < n - 2; i++) cout << 2 << " ";
            cout << endl;
        }
    }
    return 0;
}
