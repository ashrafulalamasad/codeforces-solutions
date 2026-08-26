#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n % 2 == 0){
        cout << n / 2 << endl;
        for(ll i = 0; i < n / 2; i++) cout << 2 << " ";
        cout << endl;
    }else{
        cout << (n - 1) / 2 << endl;
        cout << 3 << " ";
        for(ll i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
        cout << endl;
    }
    return 0;
}
